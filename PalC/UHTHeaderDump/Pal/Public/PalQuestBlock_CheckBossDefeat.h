#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalBossType.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CheckBossDefeat.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_CheckBossDefeat : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalBossType CheckBossType;
    
private:
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_CheckBossDefeat();

private:
    UFUNCTION()
    void CheckFlag();
    
};

