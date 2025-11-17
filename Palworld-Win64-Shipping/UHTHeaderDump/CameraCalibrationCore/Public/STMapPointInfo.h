#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.h"
#include "STMapInfo.h"
#include "STMapPointInfo.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FSTMapPointInfo : public FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSTMapInfo STMapInfo;
    
    FSTMapPointInfo();
};

