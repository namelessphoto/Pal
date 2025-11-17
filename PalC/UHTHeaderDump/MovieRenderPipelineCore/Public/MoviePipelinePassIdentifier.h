#pragma once
#include "CoreMinimal.h"
#include "MoviePipelinePassIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FMoviePipelinePassIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CameraName;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelinePassIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FMoviePipelinePassIdentifier) { return 0; }

