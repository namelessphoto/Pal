#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "RigUnit_AnimBase.h"
#include "RigUnit_AnimEvalRichCurve.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FRuntimeFloatCurve Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetMaximum;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    FRigUnit_AnimEvalRichCurve();
};

