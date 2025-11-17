#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BranchingPointNotifyPayload -FallbackName=BranchingPointNotifyPayload
#include "FlagContainer.h"
#include "FloatContainer.h"
#include "GeneralAnimationParameter.h"
#include "ReserveMontage.h"
#include "Templates/SubclassOf.h"
#include "PalAnimInstance.generated.h"

class UAnimMontage;
class UPalBoneInfo;

UCLASS(NonTransient)
class UPalAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMontageNotifyEnd, UAnimMontage*, Montage, FName, NotifyName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMontageNotifyBegin, UAnimMontage*, Montage, FName, NotifyName);
    
    UPROPERTY(BlueprintAssignable)
    FOnMontageNotifyBegin OnMontageNotifyBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMontageNotifyEnd OnMontageNotifyEndDelegate;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UAnimInstance>> ImplementationClassList;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FGeneralAnimationParameter GeneralAnimationParameter;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsRotateYawInterpolation;
    
    UPROPERTY(EditDefaultsOnly)
    float RotateYawInterpolation_Acceleration;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform OverrideTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bOverrideTransform;
    
private:
    UPROPERTY(Transient)
    TMap<FName, UPalBoneInfo*> BoneListFullBody;
    
    UPROPERTY(Transient)
    TMap<FName, UPalBoneInfo*> BoneListOnlySpines;
    
    UPROPERTY(Transient)
    TArray<FReserveMontage> ReservedMontageList;
    
    UPROPERTY(Transient)
    FFloatContainer AdditiveAnimationRate;
    
    UPROPERTY(Transient, VisibleDefaultsOnly)
    FFlagContainer DisableUpperOverrideFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float MoveSpeedOverride;
    
    UPROPERTY(Transient, VisibleDefaultsOnly)
    FFlagContainer UseUpperBodyOnlyWhileRidingFlag;
    
public:
    UPalAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetUseUpperBodyOnlyWhileRidingFlag(FName flagName, bool isUse);
    
    UFUNCTION(BlueprintCallable)
    void SetUpperOverrideDisableFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideTransform(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeedOverride(const float InMoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetForceSprintForNPC(const bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditiveAnimationRate(FName flagName, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideTransform();
    
    UFUNCTION(BlueprintCallable)
    void ReplaceReservedMontage(const int32 Index, FReserveMontage Montage);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceNextReservedMontage(FReserveMontage Montage);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceCurrentReservedMontage(FReserveMontage Montage);
    
private:
    UFUNCTION()
    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION()
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION()
    void OnMontageEndedCallback(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void Montage_PlayList(TArray<FReserveMontage> montageList);
    
    UFUNCTION(BlueprintPure)
    bool IsOverrideTransform() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetReservedMontageIndex(UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintPure)
    void GetOverrideTransform(FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetNextReservedMontage() const;
    
    UFUNCTION(BlueprintPure)
    FName GetNearBoneInSpines(FVector fromPos);
    
    UFUNCTION(BlueprintPure)
    FName GetNearBoneInFullBody(FVector fromPos);
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetCurrentReservedMontage() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentMontagePlayTimeToEnd();
    
    UFUNCTION(BlueprintPure)
    FTransform GetBoneTransform(FName BoneName);
    
    UFUNCTION(BlueprintPure)
    FQuat GetBoneRotationComponentSpace(FName BoneName);
    
    UFUNCTION(BlueprintPure)
    FQuat GetBoneRotation(FName BoneName);
    
    UFUNCTION(BlueprintPure)
    FVector GetBonePosition(FName BoneName);
    
    UFUNCTION(BlueprintPure)
    UPalBoneInfo* GetBoneInfo(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void ClearMoveSpeedOverride();
    
    UFUNCTION(BlueprintCallable)
    void CalcLength(FName Target, FName nextBone, float tipLength);
    
    UFUNCTION(BlueprintCallable)
    void BodyInstance_SetSimulate(FName BoneName, bool SimulateActive);
    
    UFUNCTION(BlueprintCallable)
    void AddSpinesListFromBoneList(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void AddList(FName BoneName);
    
};

