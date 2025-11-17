#pragma once
#include "CoreMinimal.h"
#include "RigUnit_NameBase.h"
#include "RigUnit_NameTruncate.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_NameTruncate : public FRigUnit_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FromEnd;
    
    UPROPERTY(BlueprintReadOnly)
    FName Remainder;
    
    UPROPERTY(BlueprintReadOnly)
    FName Chopped;
    
    FRigUnit_NameTruncate();
};

