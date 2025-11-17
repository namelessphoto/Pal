#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EPalWeaponType.h"
#include "FixedPoint64.h"
#include "FloatContainer.h"
#include "PalDeadInfo.h"
#include "PalDyingEndInfo.h"
#include "PalOptionGraphicsSettings.h"
#include "PalSpringArmComponent.h"
#include "ShooterSpringCameraAdditionalOffset.h"
#include "ShooterSpringCameraParameter.h"
#include "PalShooterSpringArmComponent.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class APalWeaponBase;
class UCurveFloat;
class UPalCharacterMovementComponent;
class UPalCharacterParameterComponent;
class UPalDamageReactionComponent;
class UPalShooterComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalShooterSpringArmComponent : public UPalSpringArmComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CameraInterpTime;
    
    UPROPERTY(EditAnywhere)
    float AimingCameraLagSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* LengthInterpCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* OffsetInterpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WalkCameraOffset;
    
    UPROPERTY(EditAnywhere)
    float HipShootCameraArmLength;
    
    UPROPERTY(EditAnywhere)
    FVector HipShootCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AimCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AimCameraOffset;
    
    UPROPERTY(EditAnywhere)
    TMap<EPalWeaponType, FShooterSpringCameraParameter> DefaultWeaponStandCameraParameterMap;
    
    UPROPERTY(EditAnywhere)
    TMap<TSoftClassPtr<APalWeaponBase>, FShooterSpringCameraParameter> UniqueWeaponStandCameraParameterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AirCameraOffset;
    
    UPROPERTY(EditAnywhere)
    float AirHipShootCameraArmLength;
    
    UPROPERTY(EditAnywhere)
    FVector AirHipShootCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirAimCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AirAimCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlyCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FlyCameraOffset;
    
    UPROPERTY(EditAnywhere)
    float FlyHipShootCameraArmLength;
    
    UPROPERTY(EditAnywhere)
    FVector FlyHipShootCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlyAimCameraArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FlyAimCameraOffset;
    
    UPROPERTY(EditAnywhere)
    float CrouchCameraArmLength;
    
    UPROPERTY(EditAnywhere)
    FVector CrouchCameraOffset;
    
    UPROPERTY(EditAnywhere)
    float CrouchHipShootCameraArmLength;
    
    UPROPERTY(EditAnywhere)
    FVector CrouchHipShootCameraOffset;
    
    UPROPERTY(EditAnywhere)
    float CrouchAimCameraArmLength;
    
    UPROPERTY(EditAnywhere)
    FVector CrouchAimCameraOffset;
    
    UPROPERTY(EditAnywhere)
    float SlidingCameraArmLength;
    
    UPROPERTY(EditAnywhere)
    FVector SlidingCameraOffset;
    
    UPROPERTY(EditAnywhere)
    float SlidingHipShootCameraArmLength;
    
    UPROPERTY(EditAnywhere)
    FVector SlidingHipShootCameraOffset;
    
    UPROPERTY(EditAnywhere)
    float SlidingAimCameraArmLength;
    
    UPROPERTY(EditAnywhere)
    FVector SlidingAimCameraOffset;
    
    UPROPERTY(EditAnywhere)
    float DeadCameraArmLength;
    
    UPROPERTY(EditAnywhere)
    FVector DeadCameraOffset;
    
    UPROPERTY(EditAnywhere)
    float ClimbCameraTargetOffset;
    
private:
    UPROPERTY(Transient)
    FFixedPoint64 PrevPlayerHp;
    
    UPROPERTY(Transient)
    float DefaultCameraLagSpeed;
    
    UPROPERTY(Instanced, Transient)
    UPalShooterComponent* ShooterComponent;
    
    UPROPERTY(Instanced, Transient)
    UPalCharacterMovementComponent* MoveComponent;
    
    UPROPERTY(Instanced, Transient)
    UPalCharacterParameterComponent* ParameterComponent;
    
    UPROPERTY(Instanced, Transient)
    UPalDamageReactionComponent* DamageReactionComponent;
    
    UPROPERTY()
    FFloatContainer ArmLengthScaleContainer;
    
    UPROPERTY(Transient, VisibleAnywhere)
    bool bIsSpectated;
    
public:
    UPalShooterSpringArmComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void UpdateCameraInterp(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterAdditionalOffsets();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAdditionalOffset(const FName& flgName);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraLengthScale(FName flagName, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraInterp();
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraDirection();
    
    UFUNCTION(BlueprintCallable)
    void RegisterAdditionalOffset(const FShooterSpringCameraAdditionalOffset& Offset);
    
    UFUNCTION()
    void OnUpdatePlayerHp(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    
private:
    UFUNCTION()
    void OnStartAim();
    
    UFUNCTION()
    void OnReleaseTrigger();
    
    UFUNCTION()
    void OnPullTrigger();
    
    UFUNCTION()
    void OnLanded(UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    
    UFUNCTION()
    void OnJump(UPalCharacterMovementComponent* Component);
    
    UFUNCTION()
    void OnFly(UPalCharacterMovementComponent* Component);
    
    UFUNCTION()
    void OnEndAim();
    
    UFUNCTION()
    void OnDyingDeadEnd(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo);
    
    UFUNCTION()
    void OnDead(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION()
    void OnCompleteInitializeParameter(APalCharacter* InCharacter);
    
private:
    UFUNCTION()
    void OnChangeSliding(UPalCharacterMovementComponent* Component, bool IsSliding);
    
    UFUNCTION()
    void OnChangeShootState(bool IsAim, bool IsShooting);
    
    UFUNCTION()
    void OnChangeGraphicsDelegate(const FPalOptionGraphicsSettings& PrevSettings, const FPalOptionGraphicsSettings& NewSettings);
    
    UFUNCTION()
    void OnChangeCrouch(UPalCharacterMovementComponent* Component, bool isCrouch);
    
    UFUNCTION()
    FVector GetCurrentCameraOffset() const;
    
    UFUNCTION()
    float GetCurrentCameraArmLength() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeArmParameter_forBP();
    
};

