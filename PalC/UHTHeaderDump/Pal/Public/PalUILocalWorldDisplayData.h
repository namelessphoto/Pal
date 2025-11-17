#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "EPalWorldBaseInfoSaveDataType.h"
#include "PalOptionWorldSettings.h"
#include "PalUILocalWorldDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalUILocalWorldDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString WorldDirectoryName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 PlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 Day;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString DirectoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool CanMultiplay;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalWorldBaseInfoSaveDataType BaseInfoSaveDataType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FPalOptionWorldSettings WorldSettingData;
    
    PAL_API FPalUILocalWorldDisplayData();
};

