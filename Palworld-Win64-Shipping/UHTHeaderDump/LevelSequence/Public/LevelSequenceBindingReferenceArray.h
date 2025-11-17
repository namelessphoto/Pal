#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceBindingReference.h"
#include "LevelSequenceBindingReferenceArray.generated.h"

USTRUCT()
struct FLevelSequenceBindingReferenceArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FLevelSequenceBindingReference> References;
    
    LEVELSEQUENCE_API FLevelSequenceBindingReferenceArray();
};

