#pragma once
#include "CoreMinimal.h"
#include "EInputAxisSwizzle.h"
#include "InputModifier.h"
#include "InputModifierSwizzleAxis.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierSwizzleAxis : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInputAxisSwizzle Order;
    
    UInputModifierSwizzleAxis();

};

