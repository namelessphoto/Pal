#pragma once
#include "CoreMinimal.h"
#include "RigControlLimitEnabled.h"
#include "RigUnit_HierarchyAddControlInteger_LimitSettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControlInteger_LimitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigControlLimitEnabled Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawLimits;
    
    FRigUnit_HierarchyAddControlInteger_LimitSettings();
};

