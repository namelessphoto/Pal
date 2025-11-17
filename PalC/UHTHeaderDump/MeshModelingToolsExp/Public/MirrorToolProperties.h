#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EMirrorCtrlClickBehavior.h"
#include "EMirrorOperationMode.h"
#include "EMirrorSaveMode.h"
#include "MirrorToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMirrorToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMirrorOperationMode OperationMode;
    
    UPROPERTY(EditAnywhere)
    bool bCropAlongMirrorPlaneFirst;
    
    UPROPERTY(EditAnywhere)
    bool bWeldVerticesOnMirrorPlane;
    
    UPROPERTY(EditAnywhere)
    double PlaneTolerance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAllowBowtieVertexCreation;
    
    UPROPERTY(EditAnywhere)
    EMirrorCtrlClickBehavior CtrlClickBehavior;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bButtonsOnlyChangeOrientation;
    
    UPROPERTY(EditAnywhere)
    bool bShowPreview;
    
    UPROPERTY(EditAnywhere)
    EMirrorSaveMode SaveMode;
    
    UMirrorToolProperties();

};

