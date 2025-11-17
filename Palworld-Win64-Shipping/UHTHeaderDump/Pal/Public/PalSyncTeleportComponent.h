#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalSyncTeleportRequestParameter.h"
#include "PalSyncTeleportComponent.generated.h"

class UAkAudioEvent;
class UPalAutoSaveDisabler;
class UPalHUDDispatchParameter_FadeWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalSyncTeleportComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSyncTeleportPlayerMovedDynamicDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FSyncTeleportPlayerMovedDynamicDelegate OnPlayerMovedClientDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSyncTeleportPlayerMovedDynamicDelegate OnPlayerMoveCompleteClientDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* DefaultStartSE;
    
private:
    UPROPERTY()
    UPalHUDDispatchParameter_FadeWidget* FadeParameter;
    
    UPROPERTY(Transient)
    FTimerHandle TeleportMutekiTimerHandle;
    
    UPROPERTY(Transient)
    UPalAutoSaveDisabler* AutoSaveDisabler;
    
public:
    UPalSyncTeleportComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(Client, Reliable)
    void SyncTeleport_ToClient(const FPalSyncTeleportRequestParameter& Parameter);
    
public:
    UFUNCTION(BlueprintCallable)
    void SyncTeleport(const FPalSyncTeleportRequestParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSyncTeleportStart_ToServer(const FPalSyncTeleportRequestParameter& Parameter);
    
    UFUNCTION(Reliable, Server)
    void RequestSyncTeleportMove_ToServer();
    
    UFUNCTION(Reliable, Server)
    void RequestSyncTeleportEnd_ToServer();
    
    UFUNCTION(Client, Reliable)
    void ReceiveSyncTeleportStartResult_ToClient(bool bIsSuccess);
    
    UFUNCTION(Client, Reliable)
    void ReceiveSyncTeleportMoveResult_ToClient(bool bIsSuccess);
    
    UFUNCTION(Client, Reliable)
    void ReceiveSyncTeleportEnd_ToClient(bool bIsSuccess);
    
    UFUNCTION()
    void OnEndSyncTeleportFadeOut();
    
    UFUNCTION()
    void OnEndSyncTeleportFadeIn();
    
    UFUNCTION(BlueprintPure)
    bool IsTeleporting() const;
    
    UFUNCTION()
    FQuat GetTeleportRotation() const;
    
    UFUNCTION()
    FVector GetTeleportLocation() const;
    
private:
    UFUNCTION(Client, Reliable)
    void ForceReset_ToClient();
    
public:
    UFUNCTION()
    void ForceReset_ServerInternal();
    
};

