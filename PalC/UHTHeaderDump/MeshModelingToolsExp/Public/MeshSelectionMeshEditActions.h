#pragma once
#include "CoreMinimal.h"
#include "MeshSelectionToolActionPropertySet.h"
#include "MeshSelectionMeshEditActions.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet {
    GENERATED_BODY()
public:
    UMeshSelectionMeshEditActions();

    UFUNCTION()
    void SmoothBorder();
    
    UFUNCTION()
    void Separate();
    
    UFUNCTION()
    void FlipNormals();
    
    UFUNCTION()
    void Duplicate();
    
    UFUNCTION()
    void Disconnect();
    
    UFUNCTION()
    void Delete();
    
    UFUNCTION()
    void CreatePolygroup();
    
};

