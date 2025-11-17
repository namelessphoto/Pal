#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_MapRange_Float.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MapRange_Float : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxOut;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    FRigUnit_MapRange_Float();
};

