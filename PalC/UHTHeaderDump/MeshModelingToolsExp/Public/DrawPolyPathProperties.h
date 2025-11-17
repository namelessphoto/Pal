#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EDrawPolyPathExtrudeMode.h"
#include "EDrawPolyPathRadiusMode.h"
#include "EDrawPolyPathWidthMode.h"
#include "DrawPolyPathProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDrawPolyPathProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDrawPolyPathWidthMode WidthMode;
    
    UPROPERTY(EditAnywhere)
    float Width;
    
    UPROPERTY(EditAnywhere)
    bool bRoundedCorners;
    
    UPROPERTY(EditAnywhere)
    EDrawPolyPathRadiusMode RadiusMode;
    
    UPROPERTY(EditAnywhere)
    float CornerRadius;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    int32 RadialSlices;
    
    UPROPERTY(EditAnywhere)
    bool bSinglePolyGroup;
    
    UPROPERTY(EditAnywhere)
    EDrawPolyPathExtrudeMode ExtrudeMode;
    
    UPROPERTY(EditAnywhere)
    float ExtrudeHeight;
    
    UPROPERTY(EditAnywhere)
    float RampStartRatio;
    
    UDrawPolyPathProperties();

};

