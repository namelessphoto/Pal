#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ConvertMeshesToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UConvertMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bTransferMaterials;
    
    UConvertMeshesToolProperties();

};

