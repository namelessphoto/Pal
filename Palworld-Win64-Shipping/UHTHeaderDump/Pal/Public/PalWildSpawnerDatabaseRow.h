#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalOneDayTimeType.h"
#include "EPalSpawnedCharacterType.h"
#include "EPalWeatherConditionType.h"
#include "PalWildSpawnerDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalWildSpawnerDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SpawnerName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalSpawnedCharacterType SpawnerType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalOneDayTimeType OnlyTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalWeatherConditionType OnlyWeather;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Pal_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NPC_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LvMin_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LvMax_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumMin_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumMax_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Pal_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NPC_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LvMin_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LvMax_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumMin_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumMax_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Pal_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NPC_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LvMin_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LvMax_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumMin_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumMax_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsAllowRandomizer;
    
    PAL_API FPalWildSpawnerDatabaseRow();
};

