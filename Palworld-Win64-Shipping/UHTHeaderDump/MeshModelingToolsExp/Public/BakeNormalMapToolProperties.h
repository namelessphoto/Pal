#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BakeNormalMapToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeNormalMapToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UBakeNormalMapToolProperties();

};

