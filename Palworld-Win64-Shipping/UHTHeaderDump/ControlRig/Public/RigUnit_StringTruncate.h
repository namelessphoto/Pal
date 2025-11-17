#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringTruncate.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringTruncate : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FromEnd;
    
    UPROPERTY(BlueprintReadOnly)
    FString Remainder;
    
    UPROPERTY(BlueprintReadOnly)
    FString Chopped;
    
    FRigUnit_StringTruncate();
};

