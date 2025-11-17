#pragma once
#include "CoreMinimal.h"
#include "PalPlayerRecordCountMapStruct.h"
#include "PalPlayerRecordFlagMapStruct.h"
#include "PalPlayerRecordDataStruct.generated.h"

USTRUCT()
struct FPalPlayerRecordDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, int64> simpleCountRecordMap;
    
    UPROPERTY()
    TMap<FName, bool> simpleFlagMap;
    
    UPROPERTY()
    TMap<FName, FPalPlayerRecordCountMapStruct> countMapRecordMap;
    
    UPROPERTY()
    TMap<FName, FPalPlayerRecordFlagMapStruct> flagMapRecordMap;
    
    PAL_API FPalPlayerRecordDataStruct();
};

