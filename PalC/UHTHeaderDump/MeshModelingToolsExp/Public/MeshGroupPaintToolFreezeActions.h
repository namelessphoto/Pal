#pragma once
#include "CoreMinimal.h"
#include "MeshGroupPaintToolActionPropertySet.h"
#include "MeshGroupPaintToolFreezeActions.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshGroupPaintToolFreezeActions : public UMeshGroupPaintToolActionPropertySet {
    GENERATED_BODY()
public:
    UMeshGroupPaintToolFreezeActions();

    UFUNCTION()
    void UnfreezeAll();
    
    UFUNCTION()
    void ShrinkCurrent();
    
    UFUNCTION()
    void GrowCurrent();
    
    UFUNCTION()
    void FreezeOthers();
    
    UFUNCTION()
    void FreezeCurrent();
    
    UFUNCTION()
    void FloodFillCurrent();
    
    UFUNCTION()
    void ClearCurrent();
    
    UFUNCTION()
    void ClearAll();
    
};

