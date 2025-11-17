#pragma once
#include "CoreMinimal.h"
#include "CameraLensSettings.h"
#include "NamedLensPreset.generated.h"

USTRUCT(BlueprintType)
struct FNamedLensPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraLensSettings LensSettings;
    
    CINEMATICCAMERA_API FNamedLensPreset();
};

