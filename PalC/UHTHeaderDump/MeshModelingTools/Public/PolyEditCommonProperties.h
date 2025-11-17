#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ELocalFrameMode.h"
#include "PolyEditCommonProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditCommonProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bShowWireframe;
    
    UPROPERTY(EditAnywhere)
    bool bShowSelectableCorners;
    
    UPROPERTY(EditAnywhere)
    bool bGizmoVisible;
    
    UPROPERTY(EditAnywhere)
    ELocalFrameMode LocalFrameMode;
    
    UPROPERTY(EditAnywhere)
    bool bLockRotation;
    
    UPROPERTY()
    bool bLocalCoordSystem;
    
    UPolyEditCommonProperties();

};

