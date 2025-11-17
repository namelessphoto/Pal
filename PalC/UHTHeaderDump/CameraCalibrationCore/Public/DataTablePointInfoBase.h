#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Focus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Zoom;
    
    FDataTablePointInfoBase();
};

