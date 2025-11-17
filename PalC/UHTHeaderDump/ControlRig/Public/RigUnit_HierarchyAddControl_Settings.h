#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyAddControl_Settings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControl_Settings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DisplayName;
    
    FRigUnit_HierarchyAddControl_Settings();
};

