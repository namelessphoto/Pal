#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshSymmetryProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshSymmetryProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnableSymmetry;
    
    UPROPERTY()
    bool bSymmetryCanBeEnabled;
    
    UMeshSymmetryProperties();

};

