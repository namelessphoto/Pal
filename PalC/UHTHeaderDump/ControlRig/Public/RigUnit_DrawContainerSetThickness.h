#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_DrawContainerSetThickness.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DrawContainerSetThickness : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName InstructionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Thickness;
    
    FRigUnit_DrawContainerSetThickness();
};

