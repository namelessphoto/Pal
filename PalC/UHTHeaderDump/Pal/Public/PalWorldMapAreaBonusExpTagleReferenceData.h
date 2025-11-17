#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalWorldMapAreaBonusExpTagleReferenceData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldMapAreaBonusExpTagleReferenceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ReferenceTableNum;
    
    PAL_API FPalWorldMapAreaBonusExpTagleReferenceData();
};

