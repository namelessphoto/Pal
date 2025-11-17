#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "UVProjectionToolEditActions.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UUVProjectionToolEditActions : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UUVProjectionToolEditActions();

    UFUNCTION()
    void Reset();
    
    UFUNCTION()
    void AutoFitAlign();
    
    UFUNCTION()
    void AutoFit();
    
};

