#pragma once
#include "CoreMinimal.h"
#include "RigHierarchySettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigHierarchySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ProceduralElementLimit;
    
    FRigHierarchySettings();
};

