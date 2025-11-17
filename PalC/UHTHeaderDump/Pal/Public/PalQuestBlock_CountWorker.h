#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalQuestBlock.h"
#include "PalQuestBlock_CountWorker.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_CountWorker : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequireWorkerCount;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=NotifyUpdateQuest_Client)
    int32 NowWorkerCount;
    
private:
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_CountWorker();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnTimer_CheckBaseCampWorker();
    
};

