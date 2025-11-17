#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringSplit.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringSplit : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Separator;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> Result;
    
    FRigUnit_StringSplit();
};

