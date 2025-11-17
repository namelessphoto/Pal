#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringLength.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringLength : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Length;
    
    FRigUnit_StringLength();
};

