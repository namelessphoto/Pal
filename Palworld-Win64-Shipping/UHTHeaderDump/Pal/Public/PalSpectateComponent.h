#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalSpectateInternalState.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalSpectateComponent.generated.h"

class APalPlayerController;
class APalPlayerState;
class APalSpectatorPawn;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalSpectateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnSpectateNextPlayerDelegate, const FString&, PlayerName, const FString&, NickName, const FString&, PlayerUId, const FString&, UserId);
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnBeginSpectateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnEndSpectateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpectateNextPlayerDelegate OnSpectateNextPlayerDelegate;
    
private:
    UPROPERTY(Transient, VisibleAnywhere)
    APalPlayerController* CachedOwner;
    
    UPROPERTY(Transient, VisibleAnywhere)
    APalSpectatorPawn* SpectatorPawn;
    
    UPROPERTY(Transient, VisibleAnywhere)
    EPalSpectateInternalState InternalState;
    
    UPROPERTY(Transient, VisibleAnywhere)
    bool bAdminMode;
    
public:
    UPalSpectateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpectateNextPlayer(int32 Direction);
    
    UFUNCTION(BlueprintCallable)
    void SpectateFreely();
    
private:
    UFUNCTION(Reliable, Server)
    void ServerVerifyNextPlayer(int32 Direction, bool bCheckCurrentIndex);
    
    UFUNCTION(Server, Unreliable)
    void ServerSyncSpectatorLocation(FVector NewLoc, FRotator NewRot);
    
    UFUNCTION(Reliable, Server)
    void ServerForceEndSpectate(bool bUpdateEnvironment);
    
    UFUNCTION(Reliable, Server)
    void ServerEndSpectate();
    
    UFUNCTION(Reliable, Server)
    void ServerBeginSpectate(bool bInAdminMode);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSpectating() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAdminMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceEndSpectate(bool bUpdateEnvironment);
    
private:
    UFUNCTION()
    void EventOnPlayerTeleport();
    
    UFUNCTION()
    void EventOnPlayerSlipDamaged(int32 Damage);
    
    UFUNCTION()
    void EventOnPlayerExitStage();
    
    UFUNCTION()
    void EventOnPlayerEnterStage();
    
    UFUNCTION()
    void EventOnPlayerDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void EventOnPlayerDamaged(FPalDamageResult DamageResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndSpectate();
    
private:
    UFUNCTION(Client, Reliable)
    void ClientVerifyNextPlayer(APalPlayerState* Next, FVector NextLocation);
    
    UFUNCTION(Client, Reliable)
    void ClientForceEndSpectate(bool bUpdateEnvironment);
    
    UFUNCTION(Client, Reliable)
    void ClientChangeInternalState(EPalSpectateInternalState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeSpectateMoveSpeed(int32 Direction);
    
    UFUNCTION(BlueprintCallable)
    void BeginSpectate(bool bInAdminMode);
    
};

