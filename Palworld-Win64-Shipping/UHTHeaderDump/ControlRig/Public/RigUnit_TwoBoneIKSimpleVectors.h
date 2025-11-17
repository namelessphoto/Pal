#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_HighlevelBase.h"
#include "RigUnit_TwoBoneIKSimpleVectors.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PoleVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Effector;
    
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
    
    UPROPERTY(BlueprintReadOnly)
    FVector Elbow;
    
    FRigUnit_TwoBoneIKSimpleVectors();
};

