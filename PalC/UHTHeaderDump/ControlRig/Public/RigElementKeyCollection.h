#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigElementKeyCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> Keys;
    
    FRigElementKeyCollection();
};

