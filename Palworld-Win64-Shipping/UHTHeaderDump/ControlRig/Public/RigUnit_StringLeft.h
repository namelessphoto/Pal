#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringLeft.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringLeft : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadOnly)
    FString Result;
    
    FRigUnit_StringLeft();
};

