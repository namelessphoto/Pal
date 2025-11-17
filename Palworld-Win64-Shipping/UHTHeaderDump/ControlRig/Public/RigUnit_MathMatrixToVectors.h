#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathMatrixBase.h"
#include "RigUnit_MathMatrixToVectors.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathMatrixToVectors : public FRigUnit_MathMatrixBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMatrix Value;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Origin;
    
    UPROPERTY(BlueprintReadOnly)
    FVector X;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Y;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Z;
    
    FRigUnit_MathMatrixToVectors();
};

