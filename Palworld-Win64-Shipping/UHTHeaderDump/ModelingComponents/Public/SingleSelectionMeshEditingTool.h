#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=SingleSelectionTool -FallbackName=SingleSelectionTool
#include "SingleSelectionMeshEditingTool.generated.h"

class UPersistentMeshSelection;
class UWorld;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API USingleSelectionMeshEditingTool : public USingleSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<UWorld> TargetWorld;
    
    UPROPERTY()
    UPersistentMeshSelection* InputSelection;
    
public:
    USingleSelectionMeshEditingTool();

};

