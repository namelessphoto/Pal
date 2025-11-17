#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_HighlevelBase.h"
#include "RigUnit_TwoBoneIKSimpleTransforms.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PoleVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Effector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PrimaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SecondaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondaryAxisWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StretchStartRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StretchMaximumRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BoneALength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BoneBLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Elbow;
    
    FRigUnit_TwoBoneIKSimpleTransforms();
};

