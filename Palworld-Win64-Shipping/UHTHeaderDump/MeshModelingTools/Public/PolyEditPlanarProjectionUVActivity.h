#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditPlanarProjectionUVActivity.generated.h"

class UCollectSurfacePathMechanic;
class UPolyEditActivityContext;
class UPolyEditPreviewMesh;
class UPolyEditSetUVProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditPlanarProjectionUVActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UPolyEditSetUVProperties* SetUVProperties;
    
    UPROPERTY()
    UPolyEditPreviewMesh* EditPreview;
    
    UPROPERTY()
    UCollectSurfacePathMechanic* SurfacePathMechanic;
    
    UPROPERTY()
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditPlanarProjectionUVActivity();

};

