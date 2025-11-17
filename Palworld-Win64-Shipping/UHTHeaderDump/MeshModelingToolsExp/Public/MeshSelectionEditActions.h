#pragma once
#include "CoreMinimal.h"
#include "MeshSelectionToolActionPropertySet.h"
#include "MeshSelectionEditActions.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet {
    GENERATED_BODY()
public:
    UMeshSelectionEditActions();

    UFUNCTION()
    void Shrink();
    
    UFUNCTION()
    void SelectAll();
    
    UFUNCTION()
    void OptimizeBorder();
    
    UFUNCTION()
    void LargestTriCountPart();
    
    UFUNCTION()
    void LargestAreaPart();
    
    UFUNCTION()
    void Invert();
    
    UFUNCTION()
    void Grow();
    
    UFUNCTION()
    void FloodFill();
    
    UFUNCTION()
    void Clear();
    
};

