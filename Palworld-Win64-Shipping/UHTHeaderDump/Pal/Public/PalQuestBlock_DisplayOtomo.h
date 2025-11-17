#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalWorkSuitability.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DisplayOtomo.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_DisplayOtomo : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_PalMonsterData> RequirePalIdArray_OR;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_PassiveSkillData> RequirePassiveIdArray_OR;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalWorkSuitability> RequireWorkSuitabilityArray_OR;
    
public:
    UPalQuestBlock_DisplayOtomo();

    UFUNCTION(BlueprintCallable)
    bool Validate(const FGuid& PlayerUId);
    
};

