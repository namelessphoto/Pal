#pragma once
#include "CoreMinimal.h"
#include "PalLogInfo_DropPal.generated.h"

USTRUCT(BlueprintType)
struct FPalLogInfo_DropPal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString NickName;
    
    UPROPERTY(BlueprintReadOnly)
    FName CharacterID;
    
    PAL_API FPalLogInfo_DropPal();
};

