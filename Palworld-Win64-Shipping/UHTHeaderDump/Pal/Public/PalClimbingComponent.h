#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PalClimbingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalClimbingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float ClimbMoveSpeedRateBuff;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float ClimbStaminaSpeedRateBuff;
    
public:
    UPalClimbingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateClimbBuff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TryClimbAfterGrappling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartClimb(const FHitResult& Result);
    
    UFUNCTION(BlueprintPure)
    float GetClimbStaminaSpeedRateBuff() const;
    
    UFUNCTION(BlueprintPure)
    float GetClimbMoveSpeedRateBuff() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ForceCancelClimb();
    
};

