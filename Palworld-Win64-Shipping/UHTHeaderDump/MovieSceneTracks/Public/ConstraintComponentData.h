#pragma once
#include "CoreMinimal.h"
#include "ConstraintComponentData.generated.h"

USTRUCT()
struct FConstraintComponentData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ConstraintName;
    
    MOVIESCENETRACKS_API FConstraintComponentData();
};

