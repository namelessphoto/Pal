#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalItemShopCreateDataStruct.h"
#include "PalItemShopSettingDataRow.h"
#include "PalShopProductCreateData.generated.h"

USTRUCT(BlueprintType)
struct FPalShopProductCreateData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalItemShopSettingDataRow ItemShopSettingData;
    
    UPROPERTY()
    FPalItemShopCreateDataStruct ItemShopCreateData;
    
    UPROPERTY()
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    PAL_API FPalShopProductCreateData();
};

