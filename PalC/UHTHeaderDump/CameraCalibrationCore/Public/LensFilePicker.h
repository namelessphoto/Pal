#pragma once
#include "CoreMinimal.h"
#include "LensFilePicker.generated.h"

class ULensFile;

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FLensFilePicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseDefaultLensFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULensFile* LensFile;
    
    FLensFilePicker();
};

