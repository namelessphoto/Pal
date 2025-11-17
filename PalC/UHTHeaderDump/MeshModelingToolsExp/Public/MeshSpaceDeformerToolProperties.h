#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EFlareProfileType.h"
#include "ENonlinearOperationType.h"
#include "MeshSpaceDeformerToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshSpaceDeformerToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENonlinearOperationType SelectedOperationType;
    
    UPROPERTY(EditAnywhere)
    float UpperBoundsInterval;
    
    UPROPERTY(EditAnywhere)
    float LowerBoundsInterval;
    
    UPROPERTY(EditAnywhere)
    float BendDegrees;
    
    UPROPERTY(EditAnywhere)
    float TwistDegrees;
    
    UPROPERTY(EditAnywhere)
    EFlareProfileType FlareProfileType;
    
    UPROPERTY(EditAnywhere)
    float FlarePercentY;
    
    UPROPERTY(EditAnywhere)
    bool bLockXAndYFlaring;
    
    UPROPERTY(EditAnywhere)
    float FlarePercentX;
    
    UPROPERTY(EditAnywhere)
    bool bLockBottom;
    
    UPROPERTY(EditAnywhere)
    bool bShowOriginalMesh;
    
    UPROPERTY(EditAnywhere)
    bool bDrawVisualization;
    
    UPROPERTY(EditAnywhere)
    bool bAlignToNormalOnCtrlClick;
    
    UMeshSpaceDeformerToolProperties();

};

