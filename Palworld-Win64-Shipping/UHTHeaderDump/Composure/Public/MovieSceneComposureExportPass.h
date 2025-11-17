#pragma once
#include "CoreMinimal.h"
#include "MovieSceneComposureExportPass.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneComposureExportPass {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TransformPassName;
    
    UPROPERTY(EditAnywhere)
    bool bRenamePass;
    
    UPROPERTY(EditAnywhere)
    FName ExportedAs;
    
    COMPOSURE_API FMovieSceneComposureExportPass();
};

