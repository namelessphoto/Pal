#pragma once
#include "CoreMinimal.h"
#include "CacheEventTrack.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct FCacheEventTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    UScriptStruct* Struct;
    
    UPROPERTY()
    TArray<float> TimeStamps;
    
    CHAOSCACHING_API FCacheEventTrack();
};

