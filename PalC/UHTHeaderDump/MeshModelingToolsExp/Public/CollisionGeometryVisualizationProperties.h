#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "CollisionGeometryVisualizationProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LineThickness;
    
    UPROPERTY(EditAnywhere)
    bool bShowHidden;
    
    UPROPERTY(EditAnywhere)
    bool bRandomColors;
    
    UPROPERTY(EditAnywhere)
    FColor Color;
    
    UCollisionGeometryVisualizationProperties();

};

