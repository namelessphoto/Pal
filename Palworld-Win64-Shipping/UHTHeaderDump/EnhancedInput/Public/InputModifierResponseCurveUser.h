#pragma once
#include "CoreMinimal.h"
#include "InputModifier.h"
#include "InputModifierResponseCurveUser.generated.h"

class UCurveFloat;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierResponseCurveUser : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    UCurveFloat* ResponseX;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    UCurveFloat* ResponseY;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    UCurveFloat* ResponseZ;
    
    UInputModifierResponseCurveUser();

};

