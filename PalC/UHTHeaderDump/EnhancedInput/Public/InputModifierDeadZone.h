#pragma once
#include "CoreMinimal.h"
#include "EDeadZoneType.h"
#include "InputModifier.h"
#include "InputModifierDeadZone.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierDeadZone : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditInstanceOnly)
    float LowerThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditInstanceOnly)
    float UpperThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditInstanceOnly)
    EDeadZoneType Type;
    
    UInputModifierDeadZone();

};

