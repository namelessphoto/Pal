#pragma once
#include "CoreMinimal.h"
#include "PalWorldBaseInfoSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldBaseInfoSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString WorldName;
    
    UPROPERTY()
    FString HostPlayerName;
    
    UPROPERTY()
    int32 HostPlayerLevel;
    
    UPROPERTY()
    int32 InGameDay;
    
    PAL_API FPalWorldBaseInfoSaveData();
};

