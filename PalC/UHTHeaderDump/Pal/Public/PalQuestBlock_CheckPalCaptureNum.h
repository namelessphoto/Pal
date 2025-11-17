#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CheckPalCaptureNum.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_CheckPalCaptureNum : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData CountPalName;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=NotifyUpdateQuest_Client)
    int32 NowCaptureCount;
    
private:
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_CheckPalCaptureNum();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void CheckCount();
    
};

