#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EVisibilityBasedAnimTickOption -FallbackName=EVisibilityBasedAnimTickOption
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EPalSkeletalMeshType.h"
#include "EPalSkeletalTickLayer.h"
#include "FlagContainer.h"
#include "FloatContainer.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalSkeletalMeshComponent.generated.h"

class UPalSkeletalMeshComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAppliedMakeInfoDelegate, const UPalSkeletalMeshComponent*, SkeletalMeshComponent);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanRagdoll;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClavicleAdjustDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomURO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnableGroundTilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TiltingInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableCCDForRootOnlyInRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableCCDForRagdoll;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector DefaultLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator DefaultRotator;
    
    UPROPERTY(Transient)
    FVector BeginTiltVector;
    
    UPROPERTY(Transient)
    FVector EndTiltVector;
    
    UPROPERTY(Transient)
    float TiltTimer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float UpdateRate;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float EvaluationRate;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float CurrentUpdateInterval;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float CurrentEvaluationInterval;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float OriginalTickInterval;
    
    UPROPERTY(BlueprintAssignable)
    FAppliedMakeInfoDelegate OnAppliedMakeInfo;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer DisableTilt;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFloatContainer ScaleFloatContainer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFloatContainer PitchFloatContainer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFloatContainer AnimRateScaleFloatContainer;
    
    UPROPERTY(Transient)
    float DefaultAnimRateScale;
    
    UPROPERTY(Transient)
    FVector DefaultScale3D;
    
    UPROPERTY(EditDefaultsOnly)
    EPalSkeletalMeshType PalSkeletalMeshType;
    
    UPROPERTY(EditDefaultsOnly)
    float CharcterMakeMorphMax;
    
    UPROPERTY(Transient)
    FName ItemName;
    
    UPROPERTY(Transient)
    FName BodyTypeName;
    
    UPROPERTY(Transient)
    FName SkinName;
    
    UPROPERTY(Transient)
    bool DisableChangeMesh_ByPlayerDead;
    
    UPROPERTY(Transient)
    EVisibilityBasedAnimTickOption DefaultTickOption;
    
    UPROPERTY(Transient)
    FPalPlayerDataCharacterMakeInfo CharacterMakeInfo;
    
public:
    UPalSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUpdateRate(float InRate, bool bResetCurrentInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetTiltDisable(FName flagName, bool bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeScale(FName flagName, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimePitch(FName flagName, float Pitch);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeAnimRateScale(FName flagName, float RateScale);
    
    UFUNCTION(BlueprintCallable)
    void SetEvaluationRate(float InRate, bool bResetCurrentInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRagdollCCD(bool IsActive, bool bRootOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableChangeMesh(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterMakeInfo(const FPalPlayerDataCharacterMakeInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void ResetTransformToDefault();
    
    UFUNCTION(BlueprintPure)
    bool IsDisableTilt() const;
    
    UFUNCTION(BlueprintPure)
    float GetUpdateRate() const;
    
    UFUNCTION(BlueprintPure)
    EPalSkeletalMeshType GetPalSkeletalMeshType() const;
    
    UFUNCTION(BlueprintPure)
    float GetEvaluationRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimRateScale();
    
    UFUNCTION(BlueprintCallable)
    void ChangeVisibilityAnimTick(EPalSkeletalTickLayer SkeletalTickLayer);
    
};

