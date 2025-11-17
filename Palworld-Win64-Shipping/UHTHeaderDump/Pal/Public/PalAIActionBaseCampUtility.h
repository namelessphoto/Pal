#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EAIRequestPriority -FallbackName=EAIRequestPriority
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalRequestSoftScriptPriorityAdd.h"
#include "PalAIActionBaseCampUtility.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalAIActionBaseCampUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampUtility();

    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EAIRequestPriority> GetRequestSoftScriptPriority(const EPalRequestSoftScriptPriorityAdd AddPriority);
    
};

