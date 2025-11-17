#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.h"
#include "ImageCenterInfo.h"
#include "ImageCenterPointInfo.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FImageCenterPointInfo : public FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FImageCenterInfo ImageCenterInfo;
    
    FImageCenterPointInfo();
};

