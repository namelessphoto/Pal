#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "HoleFillToolActions.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UHoleFillToolActions : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UHoleFillToolActions();

    UFUNCTION()
    void SelectAll();
    
    UFUNCTION()
    void Clear();
    
};

