#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalFlowNode_NPCTalkBase.h"
#include "PalInstanceID.h"
#include "PalFlowNode_GetCharacter.generated.h"

class UObject;

UCLASS(Abstract)
class PAL_API UPalFlowNode_GetCharacter : public UPalFlowNode_NPCTalkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_PalMonsterData PalId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_PalHumanData NPCID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_NPCUniqueData UniqueNPCID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPalDataTableRowName_PassiveSkillData> PassiveSkills;
    
private:
    UPROPERTY()
    UObject* CachedWorldContextObject;
    
public:
    UPalFlowNode_GetCharacter();

private:
    UFUNCTION()
    void OnCreatedIndividual(FPalInstanceID IndividualId);
    
};

