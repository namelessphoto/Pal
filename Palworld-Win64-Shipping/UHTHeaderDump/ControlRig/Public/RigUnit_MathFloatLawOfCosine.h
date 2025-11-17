#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatLawOfCosine.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float C;
    
    UPROPERTY(BlueprintReadOnly)
    float AlphaAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float BetaAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float GammaAngle;
    
    UPROPERTY(BlueprintReadOnly)
    bool bValid;
    
    FRigUnit_MathFloatLawOfCosine();
};

