#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MovieSceneComposureExportClient.generated.h"

class UMovieSceneComposureExportInitializer;

UINTERFACE(Blueprintable)
class COMPOSURE_API UMovieSceneComposureExportClient : public UInterface {
    GENERATED_BODY()
};

class COMPOSURE_API IMovieSceneComposureExportClient : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeForExport(UMovieSceneComposureExportInitializer* ExportInitializer);
    
};

