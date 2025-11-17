#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringPadInteger.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringPadInteger : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Digits;
    
    UPROPERTY(BlueprintReadOnly)
    FString Result;
    
    FRigUnit_StringPadInteger();
};

