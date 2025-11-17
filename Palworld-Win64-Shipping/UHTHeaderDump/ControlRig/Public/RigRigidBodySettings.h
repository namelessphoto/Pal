#pragma once
#include "CoreMinimal.h"
#include "RigRigidBodySettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigRigidBodySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    FRigRigidBodySettings();
};

