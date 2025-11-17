#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "EPalCharacterMovementCustomMode.h"
#include "PalLevelObjectActor.h"
#include "PalLevelGimmickJumpSpot.generated.h"

class AActor;
class UPalCharacterMovementComponent;
class USceneComponent;

UCLASS()
class APalLevelGimmickJumpSpot : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleDynamicMulticastDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDynamicMulticastDelegate OnLaunchCharacterDelegate;
    
    UPROPERTY(EditAnywhere)
    float JumpFowardVelocity;
    
    UPROPERTY(EditAnywhere)
    float JumpZVelocity;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
public:
    APalLevelGimmickJumpSpot(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void EventOnCharacterMovementModeChanged(UPalCharacterMovementComponent* MovementComponent, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    
    UFUNCTION()
    void EventOnCharacterJumpOrFly(UPalCharacterMovementComponent* MovementComponent);
    
    UFUNCTION()
    void EventOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void EventOnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

