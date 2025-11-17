#pragma once
#include "CoreMinimal.h"
#include "EPalOneDayTimeType.h"
#include "EPalWeatherConditionType.h"
#include "PalSpawnerOneTribeInfo.h"
#include "PalSpawnerGroupInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSpawnerGroupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName OriginalRowName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName OriginalSpawnerName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Weight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalOneDayTimeType OnlyTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalWeatherConditionType OnlyWeather;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPalSpawnerOneTribeInfo> PalList;
    
    PAL_API FPalSpawnerGroupInfo();
};

