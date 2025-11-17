#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleLawOfCosine.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleLawOfCosine : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double C;
    
    UPROPERTY(BlueprintReadOnly)
    double AlphaAngle;
    
    UPROPERTY(BlueprintReadOnly)
    double BetaAngle;
    
    UPROPERTY(BlueprintReadOnly)
    double GammaAngle;
    
    UPROPERTY(BlueprintReadOnly)
    bool bValid;
    
    FRigUnit_MathDoubleLawOfCosine();
};

