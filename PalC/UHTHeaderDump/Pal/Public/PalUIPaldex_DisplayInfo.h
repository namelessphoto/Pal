#pragma once
#include "CoreMinimal.h"
#include "EPalUIPaldexPanelDetailType.h"
#include "PalUIPaldex_DisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIPaldex_DisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly)
    FString IndexSuffix;
    
    UPROPERTY(BlueprintReadOnly)
    FString CombinedIndexString;
    
    UPROPERTY(BlueprintReadOnly)
    EPalUIPaldexPanelDetailType detailType;
    
    UPROPERTY(BlueprintReadOnly)
    FName baseCharacterName;
    
    PAL_API FPalUIPaldex_DisplayInfo();
};

