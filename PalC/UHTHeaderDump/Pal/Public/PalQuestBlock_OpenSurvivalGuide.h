#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalQuestBlock.h"
#include "PalQuestBlock_OpenSurvivalGuide.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_OpenSurvivalGuide : public UPalQuestBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_OpenSurvivalGuide();

private:
    UFUNCTION()
    void OnTimer_CheckOpen();
    
};

