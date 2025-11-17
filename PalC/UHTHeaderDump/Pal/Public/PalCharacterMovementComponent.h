#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CharacterMovementComponent -FallbackName=CharacterMovementComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENetRole -FallbackName=ENetRole
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENetworkSmoothingMode -FallbackName=ENetworkSmoothingMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EEnterWaterFlag.h"
#include "EPalCharacterMovementCustomMode.h"
#include "EPalMovementSpeedType.h"
#include "EPalWalkableFloorAnglePriority.h"
#include "FlagContainer.h"
#include "PalHoveringWaterParameter.h"
#include "PalCharacterMovementComponent.generated.h"

class APalCharacter;
class UActorComponent;
class UPalActionMovementModeBase;
class UPalCharacterMovementComponent;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateAboveWater, bool, IsAboveWater);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnMovementModeChangedDelegate, UPalCharacterMovementComponent*, Component, TEnumAsByte<EMovementMode>, PrevMode, TEnumAsByte<EMovementMode>, NewMode, EPalCharacterMovementCustomMode, PrevCustomMode, EPalCharacterMovementCustomMode, NewCustomMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLandedDelegate, UPalCharacterMovementComponent*, Component, const FHitResult&, Hit);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJumpDisable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpDelegate, UPalCharacterMovementComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlyDelegate, UPalCharacterMovementComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExitWater);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnterWater);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndRolling);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeSwimming, bool, IsInSwimming);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeSprint, UPalCharacterMovementComponent*, Component, bool, IsInSprint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeSliding, UPalCharacterMovementComponent*, Component, bool, IsInSliding);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeGroundType, TEnumAsByte<EPhysicalSurface>, CurrentGroundType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeCrouch, UPalCharacterMovementComponent*, Component, bool, IsInCrouch);
    
    UPROPERTY(BlueprintAssignable)
    FOnMovementModeChangedDelegate OnMovementModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnJumpDelegate OnJumpDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFlyDelegate OnFlyDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnLandedDelegate OnLandedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeCrouch OnChangeCrouchDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeSprint OnChangeSprintDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeSliding OnChangeSlidingDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeSwimming OnChangeSwimmingDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEnterWater OnEnterWaterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnExitWater OnExitWaterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateAboveWater OnUpdateAboveWaterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnJumpDisable OnJumpDisableDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndRolling OnEndRollingDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeGroundType OnChangeGroundTypeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DyingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FatigueMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintMaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GliderMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GliderAirControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GliderGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlidingStartSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCurrentSpeedIfOverSlidingStartSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlidingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlidingAddRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlidingSubRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSlidingAddValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlidingAddValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSlidingSubValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlidingSubValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlidingYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnableSkySliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClimbMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GrapplingMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LastLandedTransformCacheNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsUseLastLandedCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideFlySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideFlySprintSpeed;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, float> OverrideJumpZVelocityMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SearchAgentRadiusFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SwimMaxAcceleration;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, float> MaxAccelerationMultiplierMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, float> WalkSpeedMultiplierMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, float> SwimSpeedMultiplierMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, float> SwimAccelerationMultiplierMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, float> YawRotatorMultiplierMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, float> GravityZMultiplierMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, float> AirControlXYMultiplierMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, float> SlideAlphaMultiplierMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer MoveDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer InputDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer JumpDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer DriveMoveFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer PysicsAccelerationFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector ClientLocation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer CrouchDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer SlidingDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer GliderDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer SplintDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bRequestCrouch;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bRequestGliding;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bRequestEndRolling;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bRequestSprint;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector LastLandingInputVelocity;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FVector> LastLandingLocationCache;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer StepDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer NavWalkDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer BlowVelocityDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer LeanBackDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer TickOptimizationDisableFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalWalkableFloorAnglePriority, float> WalkableFloorAngleOverridesMap;
    
    UPROPERTY(Transient)
    float SlowWalkSpeed_Default;
    
    UPROPERTY(Transient)
    float WalkSpeed_Default;
    
    UPROPERTY(Transient)
    float RunSpeed_Default;
    
    UPROPERTY(Transient)
    float RideSprintSpeed_Default;
    
    UPROPERTY(Transient)
    float FlySpeed_Default;
    
    UPROPERTY(Transient)
    float FlySprintSpeed_Default;
    
    UPROPERTY(Transient)
    float SwimSpeed_Default;
    
    UPROPERTY(Transient)
    float SwimDashSpeed_Default;
    
    UPROPERTY(Transient)
    float TransportSpeed_Default;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float TemporaryAccelerationTimeCount;
    
    UPROPERTY(Transient)
    bool IsFlyDashMode;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float DefaultMaxStepHeight;
    
    UPROPERTY(Transient)
    bool bSimulatedJump;
    
    UPROPERTY(Transient)
    TEnumAsByte<ENetRole> LastNetRole;
    
    UPROPERTY(Transient)
    FVector ResolvePenetrationTotalAdjustment;
    
    UPROPERTY(Transient)
    TMap<EPalCharacterMovementCustomMode, UPalActionMovementModeBase*> ActionMovementModeMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CustomMovementMode_ForReplicate)
    EPalCharacterMovementCustomMode CustomMovementMode_ForReplicate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InWaterRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DashSwimMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpableInWaterDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPalHoveringWaterParameter HoveringWaterEffectParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SwimJumpVelocityZThreshold;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EEnterWaterFlag EnteredWaterFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float WaterPlaneZ;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float WaterPlaneZPrev;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float WaitTimeToSwimInFalling;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bIsDashSwim;
    
    UPROPERTY(Instanced, Transient)
    TArray<UPrimitiveComponent*> TempIgnore_ForPenetration;
    
    UPROPERTY(Transient)
    float CacheTickInterval;
    
    UPROPERTY(Transient)
    float ReserveTickInterval;
    
public:
    UPalCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartGrappling(const FVector& HitLocation, const FVector& HitNormal);
    
    UFUNCTION(BlueprintCallable)
    void SetYawRotatorMultiplier(FName flagName, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkSpeedMultiplier(FName flagName, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkSpeedByType(FName flagName, EPalMovementSpeedType MoveSpeedType);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkableFloorAngleOverrides(EPalWalkableFloorAnglePriority Priority, float Angle);
    
    UFUNCTION()
    void SetupDatabaseSpeedByCharacterId(APalCharacter* InCharacter, FName charaID);
    
    UFUNCTION()
    void SetupDatabaseSpeed(APalCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetSwimSpeedMultiplier(FName flagName, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetSwimAccelerationMultiplier(FName flagName, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetStepDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetSplintDisbleFlag(FName flagName, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetSlidingDisbleFlag(FName flagName, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetSlideAlphaMultiplier(FName flagName, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetPysicsAccelerationFlag(FName flagName, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingSliding(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkSmoothingMode(ENetworkSmoothingMode NewMode, bool bResetMeshLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetNavWalkDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxAccelerationMultiplier(FName flagName, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetLeanBackDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityZMultiplier(FName flagName, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetGliderDisbleFlag(FName flagName, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetForceMaxAccel(bool bIsEnable);
    
    UFUNCTION(Reliable, Server)
    void SetFlyDashMode_ToServer(bool IsDash);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveMoveFlag(FName flagName, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableTickOptimization(FName flagName, bool isDisable);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetDisableLeftHandAttachFlag(bool isDisable);
    
public:
    UFUNCTION(Reliable, Server)
    void SetDashSwimming_ToServer(bool _isDash);
    
    UFUNCTION(BlueprintCallable)
    void SetDashSwimming(bool _isDash);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomMovementMode(EPalCharacterMovementCustomMode NewCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCrouchDisbleFlag(FName flagName, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetBlowVelocityDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetAirControlXYMultiplier(FName flagName, float Rate);
    
    UFUNCTION(Reliable, Server)
    void SetActionInterrupt_ToServer(EPalCharacterMovementCustomMode InCustomMode, bool InInterrupt);
    
    UFUNCTION(BlueprintCallable)
    void ResetNetworkSmoothingModeToDefault(bool bResetMeshLocation);
    
    UFUNCTION()
    void ResetLastLandingLocationCache();
    
    UFUNCTION(BlueprintCallable)
    void RequestTemporaryAcceleration();
    
    UFUNCTION(BlueprintCallable)
    void RequestEndRolling(bool bEndRolling);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWalkableFloorAngleOverrides(EPalWalkableFloorAnglePriority Priority);
    
private:
    UFUNCTION()
    void OnRep_CustomMovementMode_ForReplicate();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnExitWater();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterWater();
    
private:
    UFUNCTION()
    void OnDeactivated(UActorComponent* Component);
    
    UFUNCTION()
    void OnChangeCrouch(UPalCharacterMovementComponent* Component, bool IsInCrouch);
    
    UFUNCTION()
    void OnChangeActiveCharacter(bool bInIsActive);
    
public:
    UFUNCTION()
    void MergeLastLandingLocationCache(const UPalCharacterMovementComponent* MovementComponent);
    
    UFUNCTION(BlueprintCallable)
    void Jump();
    
    UFUNCTION(BlueprintPure)
    bool IsTickOptimizationDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSteppingShallows() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStepDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSprint() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRolling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRequestSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRequestGliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRequestEndRolling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPysicsAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPendingSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNavWalkDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoveDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeanBackDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumpDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInputDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrappling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFallingFromSwimming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnteredWater() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnableSkySliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDriveMove() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDashSwimming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClimbing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBlowVelocityDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAboveWater() const;
    
    UFUNCTION(BlueprintPure)
    float GetYawRotatorMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWaterPlaneNormal() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWaterPlaneLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetWalkSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetWalkableFloorAngleByPriority() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetSwimSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetSwimAccelerationMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetSlideAlphaMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    EPalMovementSpeedType GetMovementSpeedTypeLesserThan(const float Speed) const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxAccelerationMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastLandingLocationFromLastOfCache() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastLandingLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetInWaterRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetGravityZMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGrapplingMoveHitLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGrapplingMoveEndLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGrapplingHitNormal() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultWalkSpeedByType(EPalMovementSpeedType MoveSpeedType) const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultRunSpeed();
    
    UFUNCTION(BlueprintPure)
    EPalCharacterMovementCustomMode GetCustomMovementMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetAirControlXYMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    TMap<EPalCharacterMovementCustomMode, UPalActionMovementModeBase*> GetActionMovementModeMap() const;
    
    UFUNCTION(BlueprintPure)
    UPalActionMovementModeBase* GetActionMovementMode(EPalCharacterMovementCustomMode CustomMode) const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetEnableBuoyancyTestMode(bool IsEnable);
    
private:
    UFUNCTION()
    void CheckReturnToNavWakl();
    
public:
    UFUNCTION(BlueprintPure)
    bool CanSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool CanGainSP() const;
    
    UFUNCTION(BlueprintPure)
    bool CanDashSwimming() const;
    
};

