#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.h"
#include "FocalLengthInfo.h"
#include "FocalLengthPointInfo.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FFocalLengthPointInfo : public FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFocalLengthInfo FocalLengthInfo;
    
    FFocalLengthPointInfo();
};

