#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleRemap.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleRemap : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double SourceMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double SourceMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double TargetMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double TargetMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bClamp;
    
    UPROPERTY(BlueprintReadOnly)
    double Result;
    
    FRigUnit_MathDoubleRemap();
};

