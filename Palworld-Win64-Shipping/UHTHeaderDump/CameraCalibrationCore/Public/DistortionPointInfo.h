#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.h"
#include "DistortionInfo.h"
#include "DistortionPointInfo.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FDistortionPointInfo : public FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDistortionInfo DistortionInfo;
    
    FDistortionPointInfo();
};

