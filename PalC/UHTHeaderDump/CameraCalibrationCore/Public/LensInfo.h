#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Templates/SubclassOf.h"
#include "LensInfo.generated.h"

class ULensModel;

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FLensInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LensModelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LensSerialNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ULensModel> LensModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SensorDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint ImageDimensions;
    
    FLensInfo();
};

