#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalArenaRule.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLevelSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PalDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBossPalRestricion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLegendPalRestricion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHumanRestricion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRideRestricion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDuplicatePalRestricion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EPalElementType> ElementRestricions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPalDataTableRowName_PalMonsterData> PalRestricionIds;
    
    PAL_API FPalArenaRule();
};

