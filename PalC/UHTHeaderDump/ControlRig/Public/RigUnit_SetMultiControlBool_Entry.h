#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetMultiControlBool_Entry.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetMultiControlBool_Entry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BoolValue;
    
    FRigUnit_SetMultiControlBool_Entry();
};

