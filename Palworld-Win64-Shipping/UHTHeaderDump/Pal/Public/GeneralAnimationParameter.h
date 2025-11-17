#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "EPalCharacterMovementCustomMode.h"
#include "EPalFootType.h"
#include "EPalGeneralAnimSequenceType.h"
#include "EPalGeneralBlendSpaceType.h"
#include "GeneralAnimationParameter.generated.h"

class UAnimSequence;
class UBlendSpace;

USTRUCT(BlueprintType)
struct FGeneralAnimationParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MoveSpeedXY;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector InputVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ClimbingVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInAir;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsSliding;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsSwimming;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RangeForGround;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsNearGround;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<EPalGeneralAnimSequenceType, UAnimSequence*> GeneralAnimSequenceMap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<EPalGeneralBlendSpaceType, UBlendSpace*> GeneralBlendSpaceMap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FootIKRootOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<EPalFootType, float> FootIKOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MoveSpeedPlusByRotateYaw;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float YawSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AdditiveAnimationRate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DisableUpperOverrideFlag;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTransportingObject;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EPalCharacterMovementCustomMode CustomMovementMode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bForceSprintForNPC;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bUseUpperBodyOnlyWhileRidingFlag;
    
    PAL_API FGeneralAnimationParameter();
};

