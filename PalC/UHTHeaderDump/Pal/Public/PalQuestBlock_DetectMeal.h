#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalQuestBlock.h"
#include "PalQuestBlock_DetectMeal.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_DetectMeal : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NowMealCount;
    
private:
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_DetectMeal();

protected:
    UFUNCTION()
    void TryInitialize();
    
    UFUNCTION()
    void OnTriedMeal();
    
};

