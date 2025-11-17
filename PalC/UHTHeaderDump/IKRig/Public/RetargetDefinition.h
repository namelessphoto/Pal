#pragma once
#include "CoreMinimal.h"
#include "BoneChain.h"
#include "RetargetDefinition.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FRetargetDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName RootBone;
    
    UPROPERTY()
    TArray<FBoneChain> BoneChains;
    
public:
    FRetargetDefinition();
};

