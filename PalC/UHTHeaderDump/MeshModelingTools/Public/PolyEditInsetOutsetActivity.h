#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditInsetOutsetActivity.generated.h"

class UPolyEditActivityContext;
class UPolyEditInsetOutsetProperties;
class UPolyEditPreviewMesh;
class USpatialCurveDistanceMechanic;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditInsetOutsetActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPolyEditInsetOutsetProperties* Settings;
    
protected:
    UPROPERTY()
    UPolyEditPreviewMesh* EditPreview;
    
    UPROPERTY()
    USpatialCurveDistanceMechanic* CurveDistMechanic;
    
    UPROPERTY()
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditInsetOutsetActivity();

};

