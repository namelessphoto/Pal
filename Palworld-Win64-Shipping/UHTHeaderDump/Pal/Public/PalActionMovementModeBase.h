#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "EPalActionMovementBaseType.h"
#include "EPalActionMovementEndReplicationType.h"
#include "EPalCharacterMovementCustomMode.h"
#include "PalActionBase.h"
#include "PalActionMovementModeBase.generated.h"

class UPalCharacterMovementComponent;

UCLASS(Abstract)
class PAL_API UPalActionMovementModeBase : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EPalCharacterMovementCustomMode MovementMode;
    
    UPROPERTY(EditDefaultsOnly)
    EPalActionMovementBaseType MovementBaseType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEndActionOnMovementModeChange;
    
    UPROPERTY(EditDefaultsOnly)
    EPalActionMovementEndReplicationType EndReplicationType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyFinishVelocityOnEndAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
public:
    UPalActionMovementModeBase();

    UFUNCTION(BlueprintCallable)
    void SetMovementMode(TEnumAsByte<EMovementMode> NewMode, uint8 NewMovementMode);
    
    UFUNCTION(BlueprintCallable)
    void SetInterrupt(bool InInterrupt);
    
    UFUNCTION()
    void OnMovementModeChanged(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool MovingOnGround() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnMovementModeChanged(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_Async_UpdateVelocity(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Async_PhysCustom(float InDeltaTime, int32 Iterations);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector K2_Async_GetVelocity(FVector BaseVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector K2_Async_GetFinishVelocity(FVector BaseVelocity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_Async_EndMovementMode();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_Async_BeginMovementMode();
    
    UFUNCTION(BlueprintPure)
    bool IsInterrupt() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsFlying() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsFalling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAsyncBegun() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsApplyFinishVelocityOnEndAction() const;
    
    UFUNCTION(BlueprintPure)
    EPalActionMovementBaseType GetMovementType() const;
    
    UFUNCTION(BlueprintPure)
    EPalCharacterMovementCustomMode GetMovementMode() const;
    
    UFUNCTION(BlueprintPure)
    UPalCharacterMovementComponent* GetMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetBrakingDeceleration() const;
    
    UFUNCTION(BlueprintPure)
    float GetAcceleration() const;
    
    UFUNCTION(BlueprintCallable)
    void CallEndAction(bool InInterrupt);
    
};

