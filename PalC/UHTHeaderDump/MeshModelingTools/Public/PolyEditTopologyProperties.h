#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "PolyEditTopologyProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditTopologyProperties : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAddExtraCorners;
    
    UPROPERTY(EditAnywhere)
    double ExtraCornerAngleThresholdDegrees;
    
    UPolyEditTopologyProperties();

    UFUNCTION()
    void RegenerateExtraCorners();
    
};

