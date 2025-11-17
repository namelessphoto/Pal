#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=SingleSelectionTool -FallbackName=SingleSelectionTool
#include "BaseMeshProcessingTool.generated.h"

class UMeshOpPreviewWithBackgroundCompute;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UBaseMeshProcessingTool : public USingleSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
public:
    UBaseMeshProcessingTool();

};

