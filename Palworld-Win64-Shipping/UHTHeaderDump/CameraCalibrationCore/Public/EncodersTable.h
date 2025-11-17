#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "EncodersTable.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FEncodersTable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve Focus;
    
    UPROPERTY()
    FRichCurve Iris;
    
    FEncodersTable();
};

