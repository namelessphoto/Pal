#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputBehaviorSource.h"
#include "LocalInputBehaviorSource.generated.h"

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API ULocalInputBehaviorSource : public UObject, public IInputBehaviorSource {
    GENERATED_BODY()
public:
    ULocalInputBehaviorSource();


    // Fix for true pure virtual functions not being implemented
};

