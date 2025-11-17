#pragma once
#include "CoreMinimal.h"
#include "RegexPatternBoneSet.generated.h"

USTRUCT()
struct FRegexPatternBoneSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString RegexPatternBone1;
    
    UPROPERTY(EditAnywhere)
    FString RegexPatternBone2;
    
    KAWAIIPHYSICS_API FRegexPatternBoneSet();
};

