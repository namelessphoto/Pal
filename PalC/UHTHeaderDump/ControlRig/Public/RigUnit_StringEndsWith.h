#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringEndsWith.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringEndsWith : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Ending;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    FRigUnit_StringEndsWith();
};

