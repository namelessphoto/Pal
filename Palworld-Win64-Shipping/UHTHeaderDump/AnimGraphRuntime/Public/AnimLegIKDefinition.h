#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimLegIKDefinition.generated.h"

USTRUCT()
struct FAnimLegIKDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference IKFootBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference FKFootBone;
    
    UPROPERTY(EditAnywhere)
    int32 NumBonesInLimb;
    
    UPROPERTY(EditAnywhere)
    float MinRotationAngle;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis> FootBoneForwardAxis;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis> HingeRotationAxis;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRotationLimit;
    
    UPROPERTY(EditAnywhere)
    bool bEnableKneeTwistCorrection;
    
    ANIMGRAPHRUNTIME_API FAnimLegIKDefinition();
};

