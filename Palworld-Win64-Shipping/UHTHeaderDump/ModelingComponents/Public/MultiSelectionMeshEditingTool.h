#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MultiSelectionTool -FallbackName=MultiSelectionTool
#include "MultiSelectionMeshEditingTool.generated.h"

class UWorld;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UMultiSelectionMeshEditingTool : public UMultiSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<UWorld> TargetWorld;
    
public:
    UMultiSelectionMeshEditingTool();

};

