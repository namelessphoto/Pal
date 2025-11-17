#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "TransformInputsToolProperties.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UTransformInputsToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bShowTransformGizmo;
    
    UTransformInputsToolProperties();

};

