#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PerlinLayerProperties.h"
#include "DisplaceMeshPerlinNoiseProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPerlinLayerProperties> PerlinLayerProperties;
    
    UDisplaceMeshPerlinNoiseProperties();

};

