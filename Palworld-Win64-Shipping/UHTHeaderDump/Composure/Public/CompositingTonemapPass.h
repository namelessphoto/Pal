#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ColorGradingSettings -FallbackName=ColorGradingSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FilmStockSettings -FallbackName=FilmStockSettings
#include "CompositingElementTransform.h"
#include "CompositingTonemapPass.generated.h"

class UComposureTonemapperPassPolicy;

UCLASS(EditInlineNew)
class COMPOSURE_API UCompositingTonemapPass : public UCompositingElementTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColorGradingSettings ColorGradingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FFilmStockSettings FilmStockSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ChromaticAberration;
    
private:
    UPROPERTY(DuplicateTransient, SkipSerialization, Transient)
    UComposureTonemapperPassPolicy* TonemapPolicy;
    
public:
    UCompositingTonemapPass();

};

