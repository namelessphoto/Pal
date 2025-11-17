#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetMultiControlFloat_Entry.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetMultiControlFloat_Entry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FloatValue;
    
    FRigUnit_SetMultiControlFloat_Entry();
};

