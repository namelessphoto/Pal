#pragma once
#include "CoreMinimal.h"
#include "PalNPCTalkNotifyInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FPalNPCTalkNotifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UDataTable* TalkDataTable;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TalkDataIndex;
    
    UPROPERTY(BlueprintReadWrite)
    FName TalkDataSeqenceName;
    
    PAL_API FPalNPCTalkNotifyInfo();
};

