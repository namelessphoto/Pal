#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringRight.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringRight : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadOnly)
    FString Result;
    
    FRigUnit_StringRight();
};

