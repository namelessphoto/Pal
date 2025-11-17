#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatRemap.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bClamp;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    FRigUnit_MathFloatRemap();
};

