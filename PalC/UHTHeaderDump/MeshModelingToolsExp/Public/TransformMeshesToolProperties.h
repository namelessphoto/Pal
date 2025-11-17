#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ETransformMeshesSnapDragRotationMode.h"
#include "ETransformMeshesSnapDragSource.h"
#include "ETransformMeshesTransformMode.h"
#include "TransformMeshesToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UTransformMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETransformMeshesTransformMode TransformMode;
    
    UPROPERTY(EditAnywhere)
    bool bApplyToInstances;
    
    UPROPERTY(EditAnywhere)
    bool bSetPivotMode;
    
    UPROPERTY(EditAnywhere)
    bool bEnableSnapDragging;
    
    UPROPERTY(EditAnywhere)
    ETransformMeshesSnapDragSource SnapDragSource;
    
    UPROPERTY(EditAnywhere)
    ETransformMeshesSnapDragRotationMode RotationMode;
    
    UPROPERTY()
    bool bHaveInstances;
    
    UTransformMeshesToolProperties();

};

