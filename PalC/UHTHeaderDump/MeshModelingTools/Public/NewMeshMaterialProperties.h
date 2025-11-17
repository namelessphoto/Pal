#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "NewMeshMaterialProperties.generated.h"

class UMaterialInterface;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UNewMeshMaterialProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, NonTransactional)
    TWeakObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(EditAnywhere)
    float UVScale;
    
    UPROPERTY(EditAnywhere)
    bool bWorldSpaceUVScale;
    
    UPROPERTY(EditAnywhere)
    bool bShowWireframe;
    
    UPROPERTY()
    bool bShowExtendedOptions;
    
    UNewMeshMaterialProperties();

};

