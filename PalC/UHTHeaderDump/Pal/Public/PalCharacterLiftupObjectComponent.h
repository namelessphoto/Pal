#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalCharacterLiftupObjectComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCharacterLiftupObjectComponent : public UActorComponent, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    bool bIsLifting;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bEnableLiftup;
    
public:
    UPalCharacterLiftupObjectComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnable(const bool bInEnable);
    
    UFUNCTION()
    void OnOverlapEndCageAreaWalls();
    
private:
    UFUNCTION()
    void OnHitOwnerMainMesh(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLifting() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetLastLiftRequestedPlayerUId() const;
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastSetBeingThrown(const bool bInBeingThrown);
    

    // Fix for true pure virtual functions not being implemented
};

