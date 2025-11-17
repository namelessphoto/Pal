#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RigControlLimitEnabled.h"
#include "RigUnit_HierarchyAddControlVector2D_LimitSettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControlVector2D_LimitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigControlLimitEnabled LimitX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigControlLimitEnabled LimitY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawLimits;
    
    FRigUnit_HierarchyAddControlVector2D_LimitSettings();
};

