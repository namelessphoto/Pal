#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BrushToolRadius.h"
#include "DynamicMeshBrushProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDynamicMeshBrushProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBrushToolRadius BrushSize;
    
    UPROPERTY(EditAnywhere)
    float BrushFalloffAmount;
    
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPROPERTY(EditAnywhere)
    bool bHitBackFaces;
    
    UDynamicMeshBrushProperties();

};

