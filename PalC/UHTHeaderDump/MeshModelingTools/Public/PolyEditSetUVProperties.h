#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PolyEditSetUVProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditSetUVProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bShowMaterial;
    
    UPolyEditSetUVProperties();

};

