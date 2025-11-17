#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=EMorphologyOperation -FallbackName=EMorphologyOperation
#include "VoxelMorphologyMeshesToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMorphologyOperation Operation;
    
    UPROPERTY(EditAnywhere)
    double Distance;
    
    UPROPERTY(EditAnywhere)
    bool bVoxWrap;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveInternalsAfterVoxWrap;
    
    UPROPERTY(EditAnywhere)
    double ThickenShells;
    
    UVoxelMorphologyMeshesToolProperties();

};

