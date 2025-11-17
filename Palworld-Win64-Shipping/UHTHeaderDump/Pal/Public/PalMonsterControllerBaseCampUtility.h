#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalMonsterControllerBaseCampHungryParameter.h"
#include "PalMonsterControllerBaseCampUtility.generated.h"

class UObject;

UCLASS(BlueprintType)
class UPalMonsterControllerBaseCampUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMonsterControllerBaseCampUtility();

    UFUNCTION(BlueprintCallable)
    static FPalMonsterControllerBaseCampHungryParameter SetHungryParameterToDefault(const UObject* WorldObjectContext, FPalMonsterControllerBaseCampHungryParameter Parameter);
    
};

