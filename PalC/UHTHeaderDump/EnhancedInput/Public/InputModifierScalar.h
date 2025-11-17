#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InputModifier.h"
#include "InputModifierScalar.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierScalar : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FVector Scalar;
    
    UInputModifierScalar();

};

