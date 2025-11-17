#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "CubeGridDuringActivityActions.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UCubeGridDuringActivityActions : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UCubeGridDuringActivityActions();

    UFUNCTION()
    void Done();
    
    UFUNCTION()
    void Cancel();
    
};

