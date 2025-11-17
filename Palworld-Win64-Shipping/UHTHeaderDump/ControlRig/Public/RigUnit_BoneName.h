#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_BoneName.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_BoneName : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName bone;
    
    FRigUnit_BoneName();
};

