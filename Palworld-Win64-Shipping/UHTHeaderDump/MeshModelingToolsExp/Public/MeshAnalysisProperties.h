#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshAnalysisProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshAnalysisProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString SurfaceArea;
    
    UPROPERTY(VisibleAnywhere)
    FString Volume;
    
    UMeshAnalysisProperties();

};

