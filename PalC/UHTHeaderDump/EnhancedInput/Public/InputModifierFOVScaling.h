#pragma once
#include "CoreMinimal.h"
#include "EFOVScalingType.h"
#include "InputModifier.h"
#include "InputModifierFOVScaling.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierFOVScaling : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditInstanceOnly)
    float FOVScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditInstanceOnly)
    EFOVScalingType FOVScalingType;
    
    UInputModifierFOVScaling();

};

