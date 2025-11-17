#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringFind.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringFind : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Search;
    
    UPROPERTY(BlueprintReadOnly)
    bool Found;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Index;
    
    FRigUnit_StringFind();
};

