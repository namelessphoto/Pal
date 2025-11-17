#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_KillDrop.generated.h"

class UPalIndividualCharacterHandle;
class UPalItemContainer;

UCLASS()
class PAL_API UPalQuestBlock_KillDrop : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_ItemData DropItemData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_PalMonsterData> TargetPalId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_PalHumanData> TargetHumanId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_NPCUniqueData> TargetUniqueNPCId;
    
public:
    UPalQuestBlock_KillDrop();

protected:
    UFUNCTION()
    void OnUpdatedInventoryContainer(UPalItemContainer* Container);
    
    UFUNCTION()
    void OnKillCharacter(UPalIndividualCharacterHandle* DeadEnemyHandle);
    
    UFUNCTION()
    void OnCaptureCharacter(UPalIndividualCharacterHandle* CharacterHandle);
    
};

