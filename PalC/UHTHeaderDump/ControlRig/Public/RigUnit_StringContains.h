#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringContains.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringContains : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Search;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    FRigUnit_StringContains();
};

