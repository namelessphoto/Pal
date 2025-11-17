#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ESmoothMeshToolSmoothType.h"
#include "SmoothMeshToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USmoothMeshToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESmoothMeshToolSmoothType SmoothingType;
    
    USmoothMeshToolProperties();

};

