#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EMeshSculptFalloffType.h"
#include "EMeshVertexSculptBrushFilterType.h"
#include "EMeshVertexSculptBrushType.h"
#include "VertexBrushSculptProperties.generated.h"

class UMeshVertexSculptTool;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UVertexBrushSculptProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMeshVertexSculptBrushType PrimaryBrushType;
    
    UPROPERTY(EditAnywhere)
    EMeshSculptFalloffType PrimaryFalloffType;
    
    UPROPERTY(EditAnywhere)
    EMeshVertexSculptBrushFilterType BrushFilter;
    
    UPROPERTY(EditAnywhere)
    bool bFreezeTarget;
    
    UPROPERTY()
    TWeakObjectPtr<UMeshVertexSculptTool> Tool;
    
    UVertexBrushSculptProperties();

};

