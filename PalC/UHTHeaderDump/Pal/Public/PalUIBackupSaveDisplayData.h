#pragma once
#include "CoreMinimal.h"
#include "PalUIBackupSaveDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIBackupSaveDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString BackupName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 PlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 Day;
    
    PAL_API FPalUIBackupSaveDisplayData();
};

