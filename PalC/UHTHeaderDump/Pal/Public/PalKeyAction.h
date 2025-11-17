#pragma once
#include "CoreMinimal.h"
#include "EPalKeyConfigAxisFilterType.h"
#include "PalKeyAction.generated.h"

USTRUCT(BlueprintType)
struct FPalKeyAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalKeyConfigAxisFilterType FilterType;
    
    PAL_API FPalKeyAction();
};

