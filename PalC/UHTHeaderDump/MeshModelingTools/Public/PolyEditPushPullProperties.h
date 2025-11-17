#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPolyEditExtrudeDirection.h"
#include "EPolyEditExtrudeDistanceMode.h"
#include "EPolyEditPushPullModeOptions.h"
#include "PolyEditPushPullProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditPushPullProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPolyEditExtrudeDistanceMode DistanceMode;
    
    UPROPERTY(EditAnywhere)
    double Distance;
    
    UPROPERTY(EditAnywhere)
    EPolyEditPushPullModeOptions DirectionMode;
    
    UPROPERTY(EditAnywhere)
    double MaxDistanceScaleFactor;
    
    UPROPERTY(EditAnywhere)
    bool bShellsToSolids;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EPolyEditExtrudeDirection MeasureDirection;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseColinearityForSettingBorderGroups;
    
    UPolyEditPushPullProperties();

};

