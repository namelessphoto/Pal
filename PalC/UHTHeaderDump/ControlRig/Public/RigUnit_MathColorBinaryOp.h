#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigUnit_MathColorBase.h"
#include "RigUnit_MathColorBinaryOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor B;
    
    UPROPERTY(BlueprintReadOnly)
    FLinearColor Result;
    
    FRigUnit_MathColorBinaryOp();
};

