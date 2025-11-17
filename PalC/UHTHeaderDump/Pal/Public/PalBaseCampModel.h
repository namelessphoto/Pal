#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalBaseCampModuleType.h"
#include "EPalBaseCampState.h"
#include "PalBaseCampModuleDelegateDelegate.h"
#include "PalBaseCampModuleMulticastDelegateDelegate.h"
#include "PalBaseCampSignificanceInfo.h"
#include "PalDamageResult.h"
#include "PalBaseCampModel.generated.h"

class APalCharacter;
class IPalBaseCampAssignableObjectInterface;
class UPalBaseCampAssignableObjectInterface;
class UPalBaseCampEnemyObserver;
class UPalBaseCampFunctionModuleBase;
class UPalBaseCampMapObjectCollection;
class UPalBaseCampModel;
class UPalBaseCampWorkCollection;
class UPalBaseCampWorkerDirector;
class UPalIndividualCharacterHandle;
class UPalWorkBase;

UCLASS(BlueprintType)
class UPalBaseCampModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDelegate, UPalBaseCampModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnUpdateStatusDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnDisposeDelegate;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid ID;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FString BaseCampName;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalBaseCampState CurrentState;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FTransform Transform;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float AreaRange;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid GroupIdBelongTo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FTransform FastTravelLocalTransform;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    UPalBaseCampWorkerDirector* WorkerDirector;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalBaseCampMapObjectCollection* MapObjectCollection;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    UPalBaseCampWorkCollection* WorkCollection;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalBaseCampEnemyObserver* EnemyObserver;
    
    UPROPERTY(Transient, VisibleAnywhere, ReplicatedUsing=OnRep_ModuleArray)
    TArray<UPalBaseCampFunctionModuleBase*> ModuleArray;
    
    UPROPERTY()
    TMap<UClass*, FPalBaseCampModuleMulticastDelegate> OnReadyModuleDelegateMap;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FGuid> PlayerUIdsExistsInsideInServer;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerMapObjectInstanceId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 BuildingNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<APalCharacter*> HardcoreLostPals;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_Level_InGuildProperty)
    int32 Level_InGuildProperty;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid LocationId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBaseCampSignificanceInfo SignificanceInfo;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float ProgressTimeSinceLastTick;
    
public:
    UPalBaseCampModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void UpdateLevel_ServerInternal(const int32 RequestPlayerId, const int32 NewLevel);
    
public:
    UFUNCTION(BlueprintPure)
    bool TryGetRandomPositionInside(const FVector& Origin, const float Radius, FVector& ToLocation) const;
    
    UFUNCTION()
    void ReflectLevel_InGuildProperty_Internal(int32 NewLevel);
    
private:
    UFUNCTION()
    void OnRep_ModuleArray();
    
    UFUNCTION()
    void OnRep_Level_InGuildProperty(int32 OldLevel);
    
    UFUNCTION()
    void OnPassedTimeAfterEmptyEnemy();
    
    UFUNCTION()
    void OnFirstAppearEnemy();
    
    UFUNCTION()
    void OnDamageInCampActor(FPalDamageResult DamageResult);
    
    UFUNCTION()
    void OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampWorkCollection* GetWorkCollection() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetTransform() const;
    
    UFUNCTION(BlueprintPure)
    EPalBaseCampState GetState() const;
    
    UFUNCTION(BlueprintPure)
    float GetRange() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetOwnerMapObjectInstanceId() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetId() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetGroupIdBelongTo() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampEnemyObserver* GetEnemyObserver() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuildingNum() const;
    
    UFUNCTION(BlueprintPure)
    FString GetBaseCampName() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindWorkAssignableObject(const UPalIndividualCharacterHandle* AssignIndividualHandle, const FGuid& WorkId, const bool bFixedAssign, UPalWorkBase*& FoundObject);
    
    UFUNCTION(BlueprintCallable)
    bool FindNearestAssignableObject(const UPalIndividualCharacterHandle* AssignIndividualHandle, const FTransform& Origin, const float Range, const bool bFixedAssign, TScriptInterface<IPalBaseCampAssignableObjectInterface>& FoundObject);
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnReadyModule(const EPalBaseCampModuleType ModuleType, FPalBaseCampModuleDelegate Delegate);
    
};

