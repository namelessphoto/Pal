#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditExtrudeActivity.generated.h"

class UPlaneDistanceFromHitMechanic;
class UPolyEditActivityContext;
class UPolyEditExtrudeProperties;
class UPolyEditOffsetProperties;
class UPolyEditPushPullProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditExtrudeActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPolyEditExtrudeProperties* ExtrudeProperties;
    
    UPROPERTY()
    UPolyEditOffsetProperties* OffsetProperties;
    
    UPROPERTY()
    UPolyEditPushPullProperties* PushPullProperties;
    
protected:
    UPROPERTY()
    UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;
    
    UPROPERTY()
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditExtrudeActivity();

};

