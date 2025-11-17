#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InputModifier.h"
#include "InputModifierResponseCurveExponential.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierResponseCurveExponential : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditInstanceOnly)
    FVector CurveExponent;
    
    UInputModifierResponseCurveExponential();

};

