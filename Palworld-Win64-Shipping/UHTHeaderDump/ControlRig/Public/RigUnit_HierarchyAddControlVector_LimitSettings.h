#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigControlLimitEnabled.h"
#include "RigUnit_HierarchyAddControlVector_LimitSettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControlVector_LimitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigControlLimitEnabled LimitX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigControlLimitEnabled LimitY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigControlLimitEnabled LimitZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawLimits;
    
    FRigUnit_HierarchyAddControlVector_LimitSettings();
};

