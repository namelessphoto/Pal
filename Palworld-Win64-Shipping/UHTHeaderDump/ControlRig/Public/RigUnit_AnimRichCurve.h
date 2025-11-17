#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "RigUnit_AnimBase.h"
#include "RigUnit_AnimRichCurve.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AnimRichCurve : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FRuntimeFloatCurve Curve;
    
    FRigUnit_AnimRichCurve();
};

