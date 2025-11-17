#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BrushToolRadius.h"
#include "SculptBrushProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USculptBrushProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBrushToolRadius BrushSize;
    
    UPROPERTY(EditAnywhere)
    float BrushFalloffAmount;
    
    UPROPERTY()
    bool bShowFalloff;
    
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPROPERTY(EditAnywhere)
    bool bHitBackFaces;
    
    UPROPERTY(EditAnywhere)
    float FlowRate;
    
    UPROPERTY(EditAnywhere)
    float Spacing;
    
    UPROPERTY(EditAnywhere)
    float Lazyness;
    
    UPROPERTY()
    bool bShowPerBrushProps;
    
    UPROPERTY()
    bool bShowLazyness;
    
    UPROPERTY()
    bool bShowFlowRate;
    
    UPROPERTY()
    bool bShowSpacing;
    
    USculptBrushProperties();

};

