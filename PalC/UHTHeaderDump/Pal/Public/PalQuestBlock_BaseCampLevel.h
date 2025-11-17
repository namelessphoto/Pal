#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalQuestBlock.h"
#include "PalQuestBlock_BaseCampLevel.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_BaseCampLevel : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequireLevel;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NowBaseCampLevel;
    
private:
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_BaseCampLevel();

private:
    UFUNCTION()
    void OnTimer_CheckBaseCampLevel();
    
};

