#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalQuestBlock.h"
#include "PalQuestBlock_UseStatusPoint.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_UseStatusPoint : public UPalQuestBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_UseStatusPoint();

protected:
    UFUNCTION()
    void TryInitialize();
    
    UFUNCTION()
    void OnUpdateStatusPoint();
    
};

