#pragma once
#include "CoreMinimal.h"
#include "PalTutorialTriggerSaveData.generated.h"

USTRUCT()
struct FPalTutorialTriggerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName TutorialMsg;
    
    UPROPERTY()
    bool Checked;
    
    PAL_API FPalTutorialTriggerSaveData();
};

