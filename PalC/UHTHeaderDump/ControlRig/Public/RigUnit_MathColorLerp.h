#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_MathColorBase.h"
#include "RigUnit_MathColorLerp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathColorLerp : public FRigUnit_MathColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float T;
    
    UPROPERTY(BlueprintReadOnly)
    FLinearColor Result;
    
    FRigUnit_MathColorLerp();
};

