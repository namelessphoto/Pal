#pragma once
#include "CoreMinimal.h"
#include "EPalTribeID.h"
#include "PalPassiveSkillExtraParameterBase.h"
#include "PalPassiveSkillExtraParameterTribeIDList.generated.h"

UCLASS(EditInlineNew)
class UPalPassiveSkillExtraParameterTribeIDList : public UPalPassiveSkillExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<EPalTribeID> TribeIDs;
    
    UPalPassiveSkillExtraParameterTribeIDList();

};

