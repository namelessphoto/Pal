#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringStartsWith.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringStartsWith : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Start;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    FRigUnit_StringStartsWith();
};

