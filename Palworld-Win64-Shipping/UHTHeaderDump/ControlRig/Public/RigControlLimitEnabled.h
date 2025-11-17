#pragma once
#include "CoreMinimal.h"
#include "RigControlLimitEnabled.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControlLimitEnabled {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMaximum;
    
    FRigControlLimitEnabled();
};

