#pragma once
#include "CoreMinimal.h"
#include "TypefaceEntry.h"
#include "Typeface.generated.h"

USTRUCT()
struct SLATECORE_API FTypeface {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTypefaceEntry> Fonts;
    
    FTypeface();
};

