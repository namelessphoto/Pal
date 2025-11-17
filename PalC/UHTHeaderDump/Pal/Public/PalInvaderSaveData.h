#pragma once
#include "CoreMinimal.h"
#include "PalInvaderSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalInvaderSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsInvading;
    
    UPROPERTY()
    float CoolTimeElapsed;
    
    UPROPERTY()
    float CoolTimeFinish;
    
    PAL_API FPalInvaderSaveData();
};

