#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReactivePropertyFloat.h"
#include "ReactivePropertyFloatValueChangeDelegateDelegate.h"
#include "ReactivePropertyFloatUtility.generated.h"

UCLASS(BlueprintType)
class UReactivePropertyFloatUtility : public UObject {
    GENERATED_BODY()
public:
    UReactivePropertyFloatUtility();

    UFUNCTION(BlueprintCallable)
    static void BindProperty(UPARAM(Ref) FReactivePropertyFloat& Property, FReactivePropertyFloatValueChangeDelegate Delegate);
    
};

