#pragma once
#include "CoreMinimal.h"
#include "PalBelongInfo.h"
#include "PalContainerBelongInfo.generated.h"

USTRUCT()
struct FPalContainerBelongInfo : public FPalBelongInfo {
    GENERATED_BODY()
public:
    PAL_API FPalContainerBelongInfo();
};

