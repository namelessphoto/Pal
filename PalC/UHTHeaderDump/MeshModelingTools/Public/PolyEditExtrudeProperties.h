#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPolyEditExtrudeDirection.h"
#include "EPolyEditExtrudeDistanceMode.h"
#include "EPolyEditExtrudeModeOptions.h"
#include "PolyEditExtrudeProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditExtrudeProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPolyEditExtrudeDistanceMode DistanceMode;
    
    UPROPERTY(EditAnywhere)
    double Distance;
    
    UPROPERTY(EditAnywhere)
    EPolyEditExtrudeDirection Direction;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EPolyEditExtrudeDirection MeasureDirection;
    
    UPROPERTY(EditAnywhere)
    bool bShellsToSolids;
    
    UPROPERTY(EditAnywhere)
    EPolyEditExtrudeModeOptions DirectionMode;
    
    UPROPERTY(EditAnywhere)
    double MaxDistanceScaleFactor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseColinearityForSettingBorderGroups;
    
    UPolyEditExtrudeProperties();

};

