#pragma once
#include "CoreMinimal.h"
#include "EPalFishingMotionType.h"
#include "EPalFishingPlayerMotionType.h"
#include "EPalRidePositionType.h"
#include "EWeaponAnimationPoseType.h"
#include "EWeaponAnimationType.h"
#include "RidingAnimationInfo.h"
#include "WeaponNotifyAnimationInfo.h"
#include "WeaponAnimationInfo.generated.h"

class UAimOffsetBlendSpace;
class UAnimMontage;
class UAnimSequence;
class UBlendSpace;
class UBlendSpace1D;

USTRUCT(BlueprintType)
struct FWeaponAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBlendSpace* NormalMoveBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBlendSpace1D* CrouchMoveBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBlendSpace* AimingMoveBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBlendSpace* HipShootingMoveBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBlendSpace* CrouchAimingMoveBlendSpace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* JumpPreliminary;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* JumpStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* JumpLoopUp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* JumpLoopDown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* JumpEnd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* AirJumpUp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* Sliding;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* SlidingEnd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* Sprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* ReloadMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* WeaponChangeMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EWeaponAnimationPoseType, UAnimSequence*> IdlePoseMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EWeaponAnimationPoseType, UAnimSequence*> JogPoseMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EWeaponAnimationPoseType, UAnimSequence*> AimBaseMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EWeaponAnimationPoseType, UAimOffsetBlendSpace*> AimOffsetMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EWeaponAnimationType, FWeaponNotifyAnimationInfo> AnimationMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalRidePositionType, FRidingAnimationInfo> RidingAnimationMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalFishingMotionType, UAnimMontage*> FishingAnimationMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalFishingPlayerMotionType, UAnimMontage*> FishingSuccessAnimationMap;
    
    PAL_API FWeaponAnimationInfo();
};

