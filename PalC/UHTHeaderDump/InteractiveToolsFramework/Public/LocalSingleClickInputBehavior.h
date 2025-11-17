#pragma once
#include "CoreMinimal.h"
#include "SingleClickInputBehavior.h"
#include "LocalSingleClickInputBehavior.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API ULocalSingleClickInputBehavior : public USingleClickInputBehavior {
    GENERATED_BODY()
public:
    ULocalSingleClickInputBehavior();

};

