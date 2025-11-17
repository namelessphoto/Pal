#pragma once
#include "CoreMinimal.h"
#include "RigUnit_NameBase.h"
#include "RigUnit_NameConcat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_NameConcat : public FRigUnit_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName B;
    
    UPROPERTY(BlueprintReadOnly)
    FName Result;
    
    FRigUnit_NameConcat();
};

