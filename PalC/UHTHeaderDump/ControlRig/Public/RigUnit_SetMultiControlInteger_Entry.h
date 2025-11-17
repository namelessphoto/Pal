#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetMultiControlInteger_Entry.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetMultiControlInteger_Entry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IntegerValue;
    
    FRigUnit_SetMultiControlInteger_Entry();
};

