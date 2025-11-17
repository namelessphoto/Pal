#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalSpawnerOneTribeInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSpawnerOneTribeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_PalMonsterData PalId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_PalHumanData NPCID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Level_Max;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Num;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Num_Max;
    
    PAL_API FPalSpawnerOneTribeInfo();
};

