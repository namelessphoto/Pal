#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BakeVisualizationProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeVisualizationProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPreviewAsMaterial;
    
    UPROPERTY(EditAnywhere)
    float Brightness;
    
    UPROPERTY(EditAnywhere)
    float AOMultiplier;
    
    UBakeVisualizationProperties();

};

