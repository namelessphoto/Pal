#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CountKillEnemy.generated.h"

class UPalIndividualCharacterHandle;

UCLASS()
class PAL_API UPalQuestBlock_CountKillEnemy : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Count)
    int32 CurrentCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCountCapture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CountOnCapture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_PalMonsterData> CountPalId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_PalHumanData> CountHumanId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_NPCUniqueData> CountUniqueNPCId;
    
public:
    UPalQuestBlock_CountKillEnemy();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_Count();
    
    UFUNCTION()
    void OnKillCharacter(UPalIndividualCharacterHandle* DeadEnemyHandle);
    
    UFUNCTION()
    void OnCaptureCharacter(UPalIndividualCharacterHandle* CharacterHandle);
    
};

