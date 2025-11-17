#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringTrimWhitespace.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringTrimWhitespace : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    UPROPERTY(BlueprintReadOnly)
    FString Result;
    
    FRigUnit_StringTrimWhitespace();
};

