#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathVectorRemap.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SourceMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SourceMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bClamp;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    FRigUnit_MathVectorRemap();
};

