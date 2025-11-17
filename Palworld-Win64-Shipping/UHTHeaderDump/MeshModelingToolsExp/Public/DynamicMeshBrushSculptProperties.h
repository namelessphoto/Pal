#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EDynamicMeshSculptBrushType.h"
#include "DynamicMeshBrushSculptProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDynamicMeshBrushSculptProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsRemeshingEnabled;
    
    UPROPERTY(EditAnywhere)
    EDynamicMeshSculptBrushType PrimaryBrushType;
    
    UPROPERTY(EditAnywhere)
    float PrimaryBrushSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bPreserveUVFlow;
    
    UPROPERTY(EditAnywhere)
    bool bFreezeTarget;
    
    UPROPERTY(EditAnywhere)
    float SmoothBrushSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bDetailPreservingSmooth;
    
    UDynamicMeshBrushSculptProperties();

};

