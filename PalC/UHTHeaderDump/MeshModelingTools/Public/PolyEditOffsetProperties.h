#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPolyEditExtrudeDirection.h"
#include "EPolyEditExtrudeDistanceMode.h"
#include "EPolyEditOffsetModeOptions.h"
#include "PolyEditOffsetProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditOffsetProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPolyEditExtrudeDistanceMode DistanceMode;
    
    UPROPERTY(EditAnywhere)
    double Distance;
    
    UPROPERTY(EditAnywhere)
    EPolyEditOffsetModeOptions DirectionMode;
    
    UPROPERTY(EditAnywhere)
    double MaxDistanceScaleFactor;
    
    UPROPERTY(EditAnywhere)
    bool bShellsToSolids;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EPolyEditExtrudeDirection MeasureDirection;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseColinearityForSettingBorderGroups;
    
    UPolyEditOffsetProperties();

};

