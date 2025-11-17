#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EExtractCollisionOutputType.h"
#include "ExtractCollisionToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UExtractCollisionToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EExtractCollisionOutputType CollisionType;
    
    UPROPERTY(EditAnywhere)
    bool bWeldEdges;
    
    UPROPERTY(EditAnywhere)
    bool bOutputSeparateMeshes;
    
    UPROPERTY(EditAnywhere)
    bool bShowPreview;
    
    UPROPERTY(EditAnywhere)
    bool bShowInputMesh;
    
    UExtractCollisionToolProperties();

};

