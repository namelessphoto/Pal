#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "DynamicSculptToolActions.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDynamicSculptToolActions : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UDynamicSculptToolActions();

    UFUNCTION()
    void DiscardAttributes();
    
};

