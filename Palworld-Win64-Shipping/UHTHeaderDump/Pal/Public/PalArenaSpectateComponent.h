#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalArenaPlayerIndex.h"
#include "EPalArenaSpectateState.h"
#include "PalArenaSpectateSpringArmParameter.h"
#include "PalArenaSpectateComponent.generated.h"

class AActor;
class APalCharacter;
class APalPlayerCharacter;
class APalPlayerController;
class APalSpectatorPawn;
class APawn;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalArenaSpectateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnBeginSpectateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnEndSpectateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnCancelSpectateDelegate;
    
    UPROPERTY(EditAnywhere)
    FPalArenaSpectateSpringArmParameter SpectatedPlayerSpringArmParameter;
    
private:
    UPROPERTY(Transient, VisibleAnywhere)
    APalPlayerController* CachedOwner;
    
    UPROPERTY(Transient, VisibleAnywhere)
    APalSpectatorPawn* SpectatorPawn;
    
    UPROPERTY(Transient, VisibleAnywhere)
    EPalArenaSpectateState State;
    
    UPROPERTY(Transient)
    APalPlayerCharacter* SpectatedPlayer;
    
public:
    UPalArenaSpectateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpectateTopDown(const FVector& FromLocation);
    
    UFUNCTION(BlueprintCallable)
    APalCharacter* SpectateNextPlayer(EPalArenaPlayerIndex& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SpectateFreely();
    
private:
    UFUNCTION(Reliable, Server)
    void ServerSetViewTarget(APawn* Pawn);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSpectating() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
private:
    UFUNCTION()
    void EventOnSpectatedPlayerRide(AActor* RideActor);
    
    UFUNCTION()
    void EventOnSpectatedPlayerGetOff(AActor* RideActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndSpectate();
    
    UFUNCTION(BlueprintCallable)
    void BeginSpectate();
    
};

