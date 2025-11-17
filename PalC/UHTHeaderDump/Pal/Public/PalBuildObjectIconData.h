#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalBuildObjectIconData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalBuildObjectIconData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> SoftIcon;
    
    PAL_API FPalBuildObjectIconData();
};

