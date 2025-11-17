#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalPassiveSkillExtraParameterBase.h"
#include "PalPassiveSkillExtraParameterItemIDList.generated.h"

UCLASS(EditInlineNew)
class UPalPassiveSkillExtraParameterItemIDList : public UPalPassiveSkillExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalDataTableRowName_ItemData> ItemIds;
    
    UPalPassiveSkillExtraParameterItemIDList();

};

