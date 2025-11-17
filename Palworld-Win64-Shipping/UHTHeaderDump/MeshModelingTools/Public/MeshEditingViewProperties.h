#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EMeshEditingMaterialModes.h"
#include "MeshEditingViewProperties.generated.h"

class UMaterialInterface;
class UTexture2D;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UMeshEditingViewProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bShowWireframe;
    
    UPROPERTY(EditAnywhere)
    EMeshEditingMaterialModes MaterialMode;
    
    UPROPERTY(EditAnywhere)
    bool bFlatShading;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Image;
    
    UPROPERTY(EditAnywhere)
    double Opacity;
    
    UPROPERTY(EditAnywhere)
    FLinearColor TransparentMaterialColor;
    
    UPROPERTY(EditAnywhere)
    bool bTwoSided;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UMaterialInterface> CustomMaterial;
    
    UMeshEditingViewProperties();

};

