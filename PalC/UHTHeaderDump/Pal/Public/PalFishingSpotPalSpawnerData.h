#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalFishingSpotPalSpawnerData.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingSpotPalSpawnerData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_PalMonsterData PalName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverrideBuoyancy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverrideInWaterRate;
    
    PAL_API FPalFishingSpotPalSpawnerData();
};

