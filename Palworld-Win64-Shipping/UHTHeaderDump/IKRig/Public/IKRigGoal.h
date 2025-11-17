#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "EIKRigGoalSpace.h"
#include "EIKRigGoalTransformSource.h"
#include "IKRigGoal.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FIKRigGoal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIKRigGoalTransformSource TransformSource;
    
    UPROPERTY(EditAnywhere)
    FBoneReference SourceBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PositionAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIKRigGoalSpace PositionSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIKRigGoalSpace RotationSpace;
    
    UPROPERTY(Transient)
    FVector FinalBlendedPosition;
    
    UPROPERTY(Transient)
    FQuat FinalBlendedRotation;
    
    FIKRigGoal();
};

