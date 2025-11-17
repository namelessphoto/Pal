#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UVLayoutPreview.generated.h"

class UMaterialInterface;
class UPreviewMesh;
class UTriangleSetComponent;
class UUVLayoutPreviewProperties;

UCLASS(Transient)
class MODELINGCOMPONENTS_API UUVLayoutPreview : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UUVLayoutPreviewProperties* Settings;
    
    UPROPERTY()
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY(Instanced)
    UTriangleSetComponent* TriangleComponent;
    
    UPROPERTY()
    bool bShowBackingRectangle;
    
    UPROPERTY()
    UMaterialInterface* BackingRectangleMaterial;
    
    UUVLayoutPreview();

};

