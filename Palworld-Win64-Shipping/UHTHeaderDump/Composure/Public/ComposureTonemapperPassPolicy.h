#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ColorGradingSettings -FallbackName=ColorGradingSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FilmStockSettings -FallbackName=FilmStockSettings
#include "ComposurePostProcessPassPolicy.h"
#include "ComposureTonemapperPassPolicy.generated.h"

UCLASS(EditInlineNew)
class COMPOSURE_API UComposureTonemapperPassPolicy : public UComposurePostProcessPassPolicy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColorGradingSettings ColorGradingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FFilmStockSettings FilmStockSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ChromaticAberration;
    
    UComposureTonemapperPassPolicy();

};

