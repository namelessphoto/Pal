#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ColorGradingSettings -FallbackName=ColorGradingSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FilmStockSettings -FallbackName=FilmStockSettings
#include "ComposurePostProcessPass.h"
#include "ComposureTonemapperPass.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COMPOSURE_API UComposureTonemapperPass : public UComposurePostProcessPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColorGradingSettings ColorGradingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FFilmStockSettings FilmStockSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ChromaticAberration;
    
    UComposureTonemapperPass(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TonemapToRenderTarget();
    
};

