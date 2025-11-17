#pragma once
#include "CoreMinimal.h"
#include "RigUnit_NameBase.h"
#include "RigUnit_Contains.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Contains : public FRigUnit_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Search;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    FRigUnit_Contains();
};

