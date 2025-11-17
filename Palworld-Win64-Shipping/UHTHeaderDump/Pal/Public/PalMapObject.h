#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalHUDDisplayType.h"
#include "EPalMapObjectChangeMeshFXType.h"
#include "EPalMapObjectDamagableType.h"
#include "EPalMapObjectDestroyFXType.h"
#include "EPalMapObjectGetModelOutPinType.h"
#include "PalDamageInfo.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalMapObjectComponentInfo.h"
#include "PalMapObjectConcreteModelDelegateDelegate.h"
#include "PalMapObjectConcreteModelMulticastDelegateDelegate.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalMapObjectMeshVisibleData.h"
#include "PalReticleTargetableInterface.h"
#include "Templates/SubclassOf.h"
#include "PalMapObject.generated.h"

class APalMapObject;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalHUDDispatchParameterBase;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectDamageReactionComponent;
class UPalMapObjectModel;
class UPalMapObjectVisualEffectComponent;
class UPalUserWidgetWorldHUD;

UCLASS()
class PAL_API APalMapObject : public AActor, public IPalInteractiveObjectIndicatorInterface, public IPalReticleTargetableInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FToggleBuildProgressHUD, EPalHUDDisplayType, DisplayType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnSelf, APalMapObject*, Self, EPalHUDDisplayType, DisplayType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalMapObjectModelDelegate, APalMapObject*, MapObject);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelf OnNotifiedShowStatusHUDDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FToggleBuildProgressHUD OnNotifiedShowBuildProgressHUDDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPalMapObjectConcreteModelMulticastDelegate OnSetConcreteModelDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPalMapObjectModelDelegate OnSetModelDelegate;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SpawnLocationOffset;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalMapObjectConcreteModelBase> ConcreteModelClass;
    
    UPROPERTY(Transient)
    TArray<TScriptInterface<IPalInteractiveObjectComponentInterface>> InteractComps;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalMapObjectDamageReactionComponent* DamageReaction;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalMapObjectVisualEffectComponent* VisualEffect;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSpawnableIfOverlapped;
    
    UPROPERTY(EditDefaultsOnly)
    bool bNotSpawnableIfOverlapMapObject;
    
    UPROPERTY(EditDefaultsOnly)
    bool bLevelSpawnObject;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> AllowOverlapCollisionPresetNames;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> AllowOverlapActorTags;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSpawnSlipAboveIfAnyOverlap;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShakeOnDamaged;
    
    UPROPERTY(EditDefaultsOnly)
    EPalMapObjectDestroyFXType DestroyFXType;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayDestroyFXPlayerRange;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShowOutlineInTargettingReticle;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShowOutlineNearPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoDestroyByOverlapSpawning;
    
    UPROPERTY(EditDefaultsOnly)
    bool bInDoorObject;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBaseObject;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid HPHUDId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid MultiplayModifierHUDId;
    
    UPROPERTY(EditDefaultsOnly)
    EPalMapObjectDamagableType DamagableType;
    
private:
    UPROPERTY(Replicated, VisibleInstanceOnly)
    FGuid ModelInstanceId;
    
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRep_MapObjectModel)
    UPalMapObjectModel* MapObjectModel;
    
    UPROPERTY(VisibleInstanceOnly)
    bool bUnmanagedInLocal;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetWorldHUD> IndicatorWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalMapObjectMeshVisibleData> MeshVisibleDataSet;
    
    UPROPERTY(EditDefaultsOnly)
    EPalMapObjectChangeMeshFXType ChangeMeshFXType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid OpenWidgetId;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWorkLocationGroupRaycastStartOffsetOrigin;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreBuildInstallConnection;
    
    UPROPERTY()
    bool bShouldPlayDestroyFX;
    
    UPROPERTY()
    bool bShouldPlayBuildCancelDestroyFX;
    
    UPROPERTY()
    TArray<FPalMapObjectComponentInfo> TickableComponentInfos;
    
public:
    APalMapObject(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryGetConcreteModel(EPalMapObjectGetModelOutPinType& OutputPin, UPalMapObjectConcreteModelBase*& ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreSave_ServerInternal(const bool bIgnore);
    
private:
    UFUNCTION()
    void OnUpdatedEnableTickByModel(UPalMapObjectModel* Model);
    
    UFUNCTION()
    void OnRep_MapObjectModel();
    
protected:
    UFUNCTION()
    void OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION()
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION()
    void OnDisposeModel_ServerInternal(UPalMapObjectModel* DisposeModel, const FPalMapObjectDisposeOptions& Options);
    
    UFUNCTION()
    void OnDamaged(UPalMapObjectModel* TargetModel, const FPalDamageInfo& DamageInfo);
    
private:
    UFUNCTION()
    void OnCloseParameter(UPalHUDDispatchParameterBase* Parameter);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsExistsWorkingAnyWorker() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistsAssignedAnyWorker() const;
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectModel* GetModel() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetGroupIdBelongTo() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetBaseCampIdBelongTo() const;
    
    UFUNCTION(BlueprintCallable)
    void DisposeSelf_ServerInternal();
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnSetConcreteModel(FPalMapObjectConcreteModelDelegate Delegate);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastShouldPlayDestroyFX();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastShouldPlayBuildCancelDestroyFX();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastShouldNotPlayDestroyFX();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastShouldNotPlayBuildCancelDestroyFX();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnSetConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    

    // Fix for true pure virtual functions not being implemented
};

