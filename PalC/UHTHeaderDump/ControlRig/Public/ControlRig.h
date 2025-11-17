#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NodeMappingProviderInterface -FallbackName=NodeMappingProviderInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyPath -ObjectName=CachedPropertyPath -FallbackName=CachedPropertyPath
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMRuntimeSettings -FallbackName=RigVMRuntimeSettings
#include "ControlRigDrawContainer.h"
#include "EControlRigState.h"
#include "ERigExecutionType.h"
#include "RigControlElement.h"
#include "RigControlElementCustomization.h"
#include "RigElementKey.h"
#include "RigHierarchySettings.h"
#include "RigInfluenceMapPerEvent.h"
#include "Templates/SubclassOf.h"
#include "ControlRig.generated.h"

class AActor;
class UAnimationDataSourceRegistry;
class UAssetUserData;
class UControlRig;
class UControlRigShapeLibrary;
class URigHierarchy;
class URigVM;
class UTransformableControlHandle;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class CONTROLRIG_API UControlRig : public UObject, public INodeMappingProviderInterface, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_ThreeParams(FOnControlSelectedBPControlRig, EnterPropertyName, UControlRig*, Rig, const FRigControlElement&, Control, bool, bSelected);
    
    UPROPERTY(Transient)
    ERigExecutionType ExecutionType;
    
    UPROPERTY()
    FRigHierarchySettings HierarchySettings;
    
    UPROPERTY()
    FRigVMRuntimeSettings VMRuntimeSettings;
    
protected:
    UPROPERTY()
    TMap<FRigElementKey, FRigControlElementCustomization> ControlCustomizations;
    
    UPROPERTY()
    URigVM* VM;
    
    UPROPERTY(Transient)
    TMap<uint32, URigVM*> InitializedVMSnapshots;
    
    UPROPERTY()
    URigHierarchy* DynamicHierarchy;
    
    UPROPERTY()
    TSoftObjectPtr<UControlRigShapeLibrary> GizmoLibrary;
    
    UPROPERTY()
    TArray<TSoftObjectPtr<UControlRigShapeLibrary>> ShapeLibraries;
    
    UPROPERTY()
    TMap<FName, FCachedPropertyPath> InputProperties;
    
    UPROPERTY()
    TMap<FName, FCachedPropertyPath> OutputProperties;
    
private:
    UPROPERTY()
    FControlRigDrawContainer DrawContainer;
    
    UPROPERTY(Transient)
    UAnimationDataSourceRegistry* DataSourceRegistry;
    
    UPROPERTY(Transient)
    TArray<FName> EventQueue;
    
    UPROPERTY()
    FRigInfluenceMapPerEvent Influences;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UControlRig* InteractionRig;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UControlRig> InteractionRigClass;
    
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    TArray<UAssetUserData*> AssetUserData;
    
    UPROPERTY(BlueprintAssignable)
    FOnControlSelectedBP OnControlSelected_BP;
    
public:
    UControlRig();

    UFUNCTION(BlueprintPure)
    bool SupportsEvent(const FName& InEventName) const;
    
    UFUNCTION(BlueprintCallable)
    bool SetVariableFromString(const FName& InVariableName, const FString& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionRigClass(TSubclassOf<UControlRig> InInteractionRigClass);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionRig(UControlRig* InInteractionRig);
    
    UFUNCTION(BlueprintCallable)
    void SetFramesPerSecond(float InFramesPerSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetDeltaTime(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
    
    UFUNCTION(BlueprintCallable)
    void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SelectControl(const FName& InControlName, bool bSelect);
    
    UFUNCTION(BlueprintCallable)
    void RequestInit();
    
    UFUNCTION(BlueprintCallable)
    void RequestConstruction();
    
    UFUNCTION(BlueprintPure)
    bool IsControlSelected(const FName& InControlName) const;
    
    UFUNCTION(BlueprintPure)
    URigVM* GetVM();
    
    UFUNCTION(BlueprintPure)
    FName GetVariableType(const FName& InVariableName) const;
    
    UFUNCTION(BlueprintPure)
    FString GetVariableAsString(const FName& InVariableName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetSupportedEvents() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetScriptAccessibleVariables() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UControlRig> GetInteractionRigClass() const;
    
    UFUNCTION(BlueprintPure)
    UControlRig* GetInteractionRig() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetHostingActor() const;
    
    UFUNCTION(BlueprintPure)
    URigHierarchy* GetHierarchy();
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetEvents() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentFramesPerSecond() const;
    
    UFUNCTION(BlueprintPure)
    float GetAbsoluteTime() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<UControlRig*> FindControlRigs(UObject* Outer, TSubclassOf<UControlRig> OptionalClass);
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteEvent(const FName& InEventName);
    
    UFUNCTION(BlueprintCallable)
    bool Execute(const EControlRigState State, const FName& InEventName);
    
    UFUNCTION(BlueprintPure)
    TArray<FName> CurrentControlSelection() const;
    
    UFUNCTION(BlueprintPure)
    UTransformableControlHandle* CreateTransformableControlHandle(UObject* Outer, const FName& ControlName) const;
    
    UFUNCTION(BlueprintPure)
    bool ContainsEvent(const FName& InEventName) const;
    
    UFUNCTION(BlueprintCallable)
    bool ClearControlSelection();
    
    UFUNCTION(BlueprintPure)
    bool CanExecute() const;
    

    // Fix for true pure virtual functions not being implemented
};

