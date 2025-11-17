#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EEditPivotSnapDragRotationMode.h"
#include "EditPivotToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UEditPivotToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnableSnapDragging;
    
    UPROPERTY(EditAnywhere)
    EEditPivotSnapDragRotationMode RotationMode;
    
    UEditPivotToolProperties();

};

