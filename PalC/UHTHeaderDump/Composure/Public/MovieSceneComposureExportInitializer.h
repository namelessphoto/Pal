#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneComposureExportInitializer.generated.h"

class ACompositingElement;
class USceneCaptureComponent2D;

UCLASS(BlueprintType)
class UMovieSceneComposureExportInitializer : public UObject {
    GENERATED_BODY()
public:
    UMovieSceneComposureExportInitializer();

    UFUNCTION(BlueprintCallable)
    void ExportSceneCaptureBuffers(ACompositingElement* CompShotElement, USceneCaptureComponent2D* SceneCapture, const TArray<FString>& BuffersToExport);
    
};

