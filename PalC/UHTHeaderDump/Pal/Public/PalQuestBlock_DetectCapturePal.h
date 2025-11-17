#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DetectCapturePal.generated.h"

class UPalIndividualCharacterHandle;

UCLASS()
class PAL_API UPalQuestBlock_DetectCapturePal : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData DetectPalName;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=NotifyUpdateQuest_Client)
    int32 NowCaptureCount;
    
public:
    UPalQuestBlock_DetectCapturePal();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnCapturedPal(UPalIndividualCharacterHandle* Handle);
    
};

