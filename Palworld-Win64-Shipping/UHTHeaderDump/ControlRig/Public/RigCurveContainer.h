#pragma once
#include "CoreMinimal.h"
#include "RigCurve.h"
#include "RigCurveContainer.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigCurveContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FRigCurve> Curves;
    
public:
    FRigCurveContainer();
};

