#pragma once
#include "CoreMinimal.h"
#include "HistoryServerWorld.generated.h"

USTRUCT(BlueprintType)
struct FHistoryServerWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString ServerName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MaxPlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString ServerAddress;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ServerPort;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString VersionString;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool IsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Guid;
    
    PAL_API FHistoryServerWorld();
};

