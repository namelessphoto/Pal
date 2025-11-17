#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalArrayUtility.generated.h"

class IDependencyElementInterface;
class UDependencyElementInterface;

UCLASS(BlueprintType)
class PAL_API UPalArrayUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalArrayUtility();

    UFUNCTION(BlueprintCallable)
    static bool TryTopologicalSort(TArray<TScriptInterface<IDependencyElementInterface>>& OutResult);
    
};

