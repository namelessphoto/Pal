#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringMiddle.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringMiddle : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadOnly)
    FString Result;
    
    FRigUnit_StringMiddle();
};

