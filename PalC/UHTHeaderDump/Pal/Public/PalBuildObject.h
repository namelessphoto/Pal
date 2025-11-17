#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentMobility -FallbackName=EComponentMobility
#include "EPalBuildObjectInstallStrategy.h"
#include "EPalBuildObjectState.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalBuildObjectMeshDefaultSetting.h"
#include "PalDamageInfo.h"
#include "PalMapObject.h"
#include "Templates/SubclassOf.h"
#include "PalBuildObject.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UAkAudioEvent;
class UBoxComponent;
class UMeshComponent;
class UPalBuildObjectInstallStrategyBase;
class UPalBuildObjectOverlapChecker;
class UPalBuildObjectVisualControlComponent;
class UPalBuildProcess;
class UPalMapObjectModel;
class UPalWorkProgress;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS()
class PAL_API APalBuildObject : public APalMapObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeStateDelegate, EPalBuildObjectState, State);
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeStateDelegate OnChangeState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalBuildObjectInstallStrategy InstallStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UPalBuildObjectInstallStrategyBase> InstallStrategyClass;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float InstallCapacitySlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float InstallCapacitySinkRateByHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector InstallLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InstallNeighborRotationZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility> DefaultMobility;
    
    UPROPERTY(Instanced, Transient)
    UPalBuildObjectVisualControlComponent* VisualCtrl;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    FName BuildObjectId;
    
    UPROPERTY(Instanced, Transient)
    UShapeComponent* OverlapCheckCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentReference OverlapCheckCollisionRef;
    
    UPROPERTY(Instanced, Transient)
    UBoxComponent* SnapCheckBoxCollision;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FBox LocalBounds;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UPalBuildObjectOverlapChecker* OverlapChecker;
    
    UPROPERTY(Instanced, Transient)
    TArray<UMeshComponent*> AllMeshes;
    
    UPROPERTY(Instanced, Transient)
    TArray<UPrimitiveComponent*> VirtualMeshCollisions;
    
    UPROPERTY(Instanced, Transient)
    UMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FComponentReference MainMeshRef;
    
    UPROPERTY(Transient)
    FVector SnapCheckCoolisionCenterOffset;
    
    UPROPERTY(Transient)
    FBoxSphereBounds SnapCheckCollisionBounds;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPlayBuildCompleteFX;
    
    UPROPERTY(EditDefaultsOnly)
    bool bNotConstructConnectorInGame;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentState)
    EPalBuildObjectState CurrentState;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid WorldHUDId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid buildProgressWorldHUDId;
    
    UPROPERTY(EditDefaultsOnly, Transient)
    FVector WorldHUDDisplayOffset;
    
    UPROPERTY(EditDefaultsOnly, Transient)
    float WorldHUDDisplayRange;
    
    UPROPERTY(EditDefaultsOnly, Transient)
    FVector buildProgressHUDDisplayOffset;
    
    UPROPERTY(EditDefaultsOnly, Transient)
    FVector buildProgressHUDDisplayOffsetScreen;
    
    UPROPERTY(EditDefaultsOnly, Transient)
    float buildProgressHUDDisplayRange;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* BuildCompleteSEOverride;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_BuildProgressVisualRate)
    float BuildProgressVisualRate;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bDismantleTargetInLocal;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<UPrimitiveComponent*, FPalBuildObjectMeshDefaultSetting> DefaultMeshSettingMap;
    
    UPROPERTY(EditDefaultsOnly)
    bool bReplaceOverlapCheck;
    
public:
    APalBuildObject(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(NetMulticast, Reliable)
    void PlayBuildCompleteFX_ToALL();
    
private:
    UFUNCTION()
    void OnUpdateHP(UPalMapObjectModel* DamagedModel);
    
    UFUNCTION()
    void OnUpdateBuildWorkAmount(UPalWorkProgress* WorkProgress);
    
    UFUNCTION()
    void OnTriggerInteractBuilding(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnTickRepairCompleteAnimation();
    
    UFUNCTION()
    void OnTickBuildCompleteAnimation();
    
    UFUNCTION()
    void OnStartTriggerInteractBuilding(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnRep_CurrentState();
    
    UFUNCTION()
    void OnRep_BuildProgressVisualRate();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnNotAvailable_BlueprintImpl();
    
private:
    UFUNCTION()
    void OnFinishBuildWork_ServerInternal(UPalBuildProcess* BuildProcess);
    
    UFUNCTION()
    void OnEndTriggerInteractBuilding(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnDamage(UPalMapObjectModel* DamagedModel, const FPalDamageInfo& DamageInfo);
    
    UFUNCTION()
    void OnBeginInteractBuilding(AActor* OtherActor, TScriptInterface<IPalInteractiveObjectComponentInterface> InteractiveObject);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAvailable_BlueprintImpl();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UShapeComponent* GetBuildWorkableBoundsShape() const;
    
};

