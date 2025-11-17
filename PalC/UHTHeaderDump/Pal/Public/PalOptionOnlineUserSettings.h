#pragma once
#include "CoreMinimal.h"
#include "PalOptionOnlineIds.h"
#include "PalOptionOnlineUserSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionOnlineUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FPalOptionOnlineIds> MuteList;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FPalOptionOnlineIds> BlockList;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 TermsOfUseAgreementNumber;
    
    PAL_API FPalOptionOnlineUserSettings();
};

