#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigControlLimitEnabled.h"
#include "RigUnit_HierarchyAddControlRotator_LimitSettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControlRotator_LimitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigControlLimitEnabled LimitPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigControlLimitEnabled LimitYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigControlLimitEnabled LimitRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawLimits;
    
    FRigUnit_HierarchyAddControlRotator_LimitSettings();
};

