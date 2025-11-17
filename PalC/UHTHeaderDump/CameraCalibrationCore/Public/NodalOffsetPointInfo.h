#pragma once
#include "CoreMinimal.h"
#include "DataTablePointInfoBase.h"
#include "NodalPointOffset.h"
#include "NodalOffsetPointInfo.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FNodalOffsetPointInfo : public FDataTablePointInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FNodalPointOffset NodalPointOffset;
    
    FNodalOffsetPointInfo();
};

