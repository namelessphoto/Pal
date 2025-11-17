#pragma once
#include "CoreMinimal.h"
#include "MultiSelectionMeshEditingTool.h"
#include "BaseCreateFromSelectedTool.generated.h"

class UBaseCreateFromSelectedHandleSourceProperties;
class UCombinedTransformGizmo;
class UCreateMeshObjectTypeProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UTransformInputsToolProperties;
class UTransformProxy;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UBaseCreateFromSelectedTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UTransformInputsToolProperties* TransformProperties;
    
    UPROPERTY()
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY()
    UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
    UPROPERTY()
    TArray<UTransformProxy*> TransformProxies;
    
    UPROPERTY()
    TArray<UCombinedTransformGizmo*> TransformGizmos;
    
public:
    UBaseCreateFromSelectedTool();

};

