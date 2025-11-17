#pragma once
#include "CoreMinimal.h"
#include "CameraFilmbackSettings.h"
#include "NamedFilmbackPreset.generated.h"

USTRUCT(BlueprintType)
struct FNamedFilmbackPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraFilmbackSettings FilmbackSettings;
    
    CINEMATICCAMERA_API FNamedFilmbackPreset();
};

