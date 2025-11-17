#pragma once
#include "CoreMinimal.h"
#include "EPalUIRewardDisplayType.h"
#include "PalUICommonRewardDisplayData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalUICommonRewardDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> SoftTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalUIRewardDisplayType DisplayType;
    
    PAL_API FPalUICommonRewardDisplayData();
};

