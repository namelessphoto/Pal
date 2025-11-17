#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalPassivePartnerSkillItemParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillItemParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPalItemTypeA ItemTypeA;
    
    UPROPERTY(EditAnywhere)
    EPalItemTypeB ItemTypeB;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDataTableRowName_ItemData> ItemIds;
    
    PAL_API FPalPassivePartnerSkillItemParameter();
};

