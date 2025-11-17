#pragma once
#include "CoreMinimal.h"
#include "RigElementWeight.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigElementWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    FRigElementWeight();
};

