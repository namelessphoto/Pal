#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalRidePositionType.h"
#include "EPalWeaponType.h"
#include "FlagContainer.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDeadInfo.h"
#include "RiderActionInfo.h"
#include "Templates/SubclassOf.h"
#include "PalRiderComponent.generated.h"

class AActor;
class AController;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UAnimMontage;
class UPalRideMarkerComponent;
class UPalUniqueRideAnimeAssetBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalRiderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRide, AActor*, RideActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetOff, AActor*, RideActor);
    
    UPROPERTY(BlueprintAssignable)
    FOnRide OnRide;
    
    UPROPERTY(BlueprintAssignable)
    FOnGetOff OnGetOff;
    
    UPROPERTY(Export, Replicated)
    TWeakObjectPtr<UPalRideMarkerComponent> RidingMarker;
    
    UPROPERTY(EditAnywhere)
    TMap<EPalRidePositionType, FRiderActionInfo> RideActionMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    AController* FullRidePalController;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* RideShakingMontage;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer DisableRide;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer DisableGetOff;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer DisableAdjustRotation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector DefaultMeshLocation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer DisableUniqueRideIK;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float DefaultJumpZVelocity;
    
    UPROPERTY(Replicated)
    FVector InitialMeshLocation;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalWeaponType, FVector2D> BackRideLimit;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FPalDataTableRowName_PalMonsterData, TSubclassOf<UPalUniqueRideAnimeAssetBase>> UniqueRideAnimBPClassMap;
    
private:
    UPROPERTY(Transient)
    TMap<FName, UPalUniqueRideAnimeAssetBase*> UniqueRideAnimeAssetMap;
    
public:
    UPalRiderComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void StopShakingMontage();
    
private:
    UFUNCTION(Reliable, Server)
    void SetRideMarker_ToServer(int32 ID, UPalRideMarkerComponent* Marker);
    
    UFUNCTION(NetMulticast, Reliable)
    void SetRideMarker_ToALL(int32 ID, UPalRideMarkerComponent* Marker);
    
    UFUNCTION()
    void SetRideMarker_Internal(UPalRideMarkerComponent* Marker);
    
    UFUNCTION()
    void SetRideMarker(UPalRideMarkerComponent* Marker);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableUniqueRideIK(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableRide(FName flagName, bool bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableGetOff(FName flagName, bool bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableAdjustRotation(FName flagName, bool bIsDisable);
    
    UFUNCTION()
    void RideClientRep(UPalRideMarkerComponent* Marker);
    
    UFUNCTION(BlueprintCallable)
    bool Ride(UPalRideMarkerComponent* Marker, bool bIsSkipAnimation);
    
    UFUNCTION()
    void PlayShakingMontage(UAnimMontage* overrideMontage, float PlayRate);
    
private:
    UFUNCTION()
    void OnStartInteractInClient(TScriptInterface<IPalInteractiveObjectComponentInterface> Object);
    
    UFUNCTION(Reliable, Server)
    void OnStartInteractForServer();
    
    UFUNCTION()
    void OnStartAim();
    
    UFUNCTION()
    void OnSleepPlayer(int32 LastDamage);
    
    UFUNCTION()
    void OnSleep(int32 LastDamage);
    
    UFUNCTION()
    void OnInactive();
    
    UFUNCTION()
    void OnEndInteractInClient();
    
    UFUNCTION(Reliable, Server)
    void OnEndInteractForServer();
    
    UFUNCTION()
    void OnEndAim();
    
    UFUNCTION()
    void OnDeadPlayer(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnChangeActive(bool IsActive);
    
    UFUNCTION()
    void OnCaptureStart();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsRiding() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableRide();
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableGetOff();
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableAdjustRotation();
    
private:
    UFUNCTION(BlueprintCallable)
    UPalUniqueRideAnimeAssetBase* GetUniqueRideAnimeAsset();
    
public:
    UFUNCTION(BlueprintPure)
    AActor* GetRindingActor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRiderModelIsBackward();
    
    UFUNCTION(BlueprintPure)
    UPalRideMarkerComponent* GetRideMarker() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetOff(bool bIsSkipAnimation, bool bNoAnimCancel);
    
    UFUNCTION(BlueprintPure)
    EPalRidePositionType GetCurrentRidePositionType() const;
    
private:
    UFUNCTION(Reliable, Server)
    void DettachRiderNoAnimation_ToServer(int32 ID);
    
    UFUNCTION(NetMulticast, Reliable)
    void DettachRiderNoAnimation_ToALL(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable)
    void DettachRiderNoAnimation();
    
private:
    UFUNCTION(Reliable, Server)
    void DettachRider_ToServer(int32 ID);
    
    UFUNCTION(NetMulticast, Reliable)
    void DettachRider_ToALL(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable)
    void DettachRider();
    
    UFUNCTION(BlueprintPure)
    bool CanUniqueRideIK();
    
private:
    UFUNCTION(Reliable, Server)
    void AttachRiderNoAnimation_ToServer(int32 ID);
    
    UFUNCTION(NetMulticast, Reliable)
    void AttachRiderNoAnimation_ToALL(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable)
    void AttachRiderNoAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool AttachRider();
    
};

