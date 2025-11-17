#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPolyEditCutPlaneOrientation.h"
#include "PolyEditCutProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditCutProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPolyEditCutPlaneOrientation Orientation;
    
    UPROPERTY(EditAnywhere)
    bool bSnapToVertices;
    
    UPolyEditCutProperties();

};

