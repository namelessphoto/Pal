#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalOperatingTablePassiveSkillData.generated.h"

USTRUCT(BlueprintType)
struct FPalOperatingTablePassiveSkillData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PassiveSkill;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Price;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RequireItemId;
    
    PAL_API FPalOperatingTablePassiveSkillData();
};

