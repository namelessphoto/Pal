#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConstraintTickFunction.h"
#include "TickableConstraint.generated.h"

UCLASS(Abstract, BlueprintType)
class CONSTRAINTS_API UTickableConstraint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FConstraintTickFunction ConstraintTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Active;
    
    UTickableConstraint();

};

