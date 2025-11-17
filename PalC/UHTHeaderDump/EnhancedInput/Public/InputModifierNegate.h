#pragma once
#include "CoreMinimal.h"
#include "InputModifier.h"
#include "InputModifierNegate.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierNegate : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bX;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bY;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bZ;
    
    UInputModifierNegate();

};

