#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "WeldMeshEdgesToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UWeldMeshEdgesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Tolerance;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyUnique;
    
    UPROPERTY(EditAnywhere)
    bool bResolveTJunctions;
    
    UPROPERTY(VisibleAnywhere)
    int32 InitialEdges;
    
    UPROPERTY(VisibleAnywhere)
    int32 RemainingEdges;
    
    UWeldMeshEdgesToolProperties();

};

