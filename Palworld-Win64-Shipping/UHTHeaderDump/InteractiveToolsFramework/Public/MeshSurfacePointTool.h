#pragma once
#include "CoreMinimal.h"
#include "SingleSelectionTool.h"
#include "MeshSurfacePointTool.generated.h"

class UWorld;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMeshSurfacePointTool : public USingleSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<UWorld> TargetWorld;
    
public:
    UMeshSurfacePointTool();

};

