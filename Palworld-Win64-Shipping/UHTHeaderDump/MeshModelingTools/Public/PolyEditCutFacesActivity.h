#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditCutFacesActivity.generated.h"

class UCollectSurfacePathMechanic;
class UPolyEditActivityContext;
class UPolyEditCutProperties;
class UPolyEditPreviewMesh;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditCutFacesActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UPolyEditCutProperties* CutProperties;
    
    UPROPERTY()
    UPolyEditPreviewMesh* EditPreview;
    
    UPROPERTY()
    UCollectSurfacePathMechanic* SurfacePathMechanic;
    
    UPROPERTY()
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditCutFacesActivity();

};

