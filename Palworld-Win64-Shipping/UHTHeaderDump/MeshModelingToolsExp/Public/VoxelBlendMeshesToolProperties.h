#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EVoxelBlendOperation.h"
#include "VoxelBlendMeshesToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double BlendPower;
    
    UPROPERTY(EditAnywhere)
    double BlendFalloff;
    
    UPROPERTY(EditAnywhere)
    EVoxelBlendOperation Operation;
    
    UPROPERTY(EditAnywhere)
    bool bVoxWrap;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveInternalsAfterVoxWrap;
    
    UPROPERTY(EditAnywhere)
    double ThickenShells;
    
    UVoxelBlendMeshesToolProperties();

};

