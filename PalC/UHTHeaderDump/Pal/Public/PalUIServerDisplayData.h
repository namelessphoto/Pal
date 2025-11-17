#pragma once
#include "CoreMinimal.h"
#include "EPalUIServerListFilterType.h"
#include "PalUIServerDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIServerDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ServerName;
    
    UPROPERTY(BlueprintReadOnly)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsPvP;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Day;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NowPlayerNum;
    
    UPROPERTY(BlueprintReadOnly)
    int32 MaxPlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Ping;
    
    UPROPERTY(BlueprintReadOnly)
    EPalUIServerListFilterType ServerListType;
    
    UPROPERTY(BlueprintReadOnly)
    FString ServerAddress;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ServerPort;
    
    UPROPERTY(BlueprintReadOnly)
    FString VersionString;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsLocked;
    
    UPROPERTY(BlueprintReadOnly)
    FString Region;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CreateTime;
    
    PAL_API FPalUIServerDisplayData();
};

