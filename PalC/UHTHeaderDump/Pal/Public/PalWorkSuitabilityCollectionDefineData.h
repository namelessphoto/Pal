#pragma once
#include "CoreMinimal.h"
#include "PalCollectionRankDefineData.h"
#include "PalWorkSuitabilityDefineData.h"
#include "PalWorkSuitabilityCollectionDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityCollectionDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FPalWorkSuitabilityDefineData CommonDefineData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalCollectionRankDefineData> CollectionDefineData;
    
    PAL_API FPalWorkSuitabilityCollectionDefineData();
};

