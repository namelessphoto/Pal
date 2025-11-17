#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "VertexBrushAlphaProperties.generated.h"

class UTexture2D;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UVertexBrushAlphaProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* Alpha;
    
    UPROPERTY(EditAnywhere)
    float RotationAngle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bRandomize;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float RandomRange;
    
    UVertexBrushAlphaProperties();

};

