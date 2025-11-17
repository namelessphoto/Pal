#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "EPalWorldBaseInfoSaveDataType.h"
#include "PalWorldBaseInfoSaveData.h"
#include "PalWorldBaseInfoData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldBaseInfoData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalWorldBaseInfoSaveData BaseInfoSaveData;
    
    UPROPERTY()
    FDateTime Timestamp;
    
    UPROPERTY()
    FString DirectoryPath;
    
    UPROPERTY()
    bool CanMulti;
    
    UPROPERTY()
    EPalWorldBaseInfoSaveDataType BaseInfoSaveDataType;
    
    PAL_API FPalWorldBaseInfoData();
};

