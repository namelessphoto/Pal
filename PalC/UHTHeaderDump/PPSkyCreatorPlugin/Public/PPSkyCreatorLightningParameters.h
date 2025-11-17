#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PPSkyCreatorLightningParameters.generated.h"

USTRUCT(BlueprintType)
struct FPPSkyCreatorLightningParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    PPSKYCREATORPLUGIN_API FPPSkyCreatorLightningParameters();
};

