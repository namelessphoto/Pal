#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ActionDynamicParameter.h"
#include "PalNetArchive.h"
#include "ActionDynamicParameterUtility.generated.h"

UCLASS(BlueprintType)
class UActionDynamicParameterUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActionDynamicParameterUtility();

    UFUNCTION(BlueprintCallable)
    static void SetBlackboard(UPARAM(Ref) FActionDynamicParameter& DynamicParameterRef, UPARAM(Ref) FPalNetArchive& Blackboard);
    
};

