#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EditPivotToolActionPropertySet.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseWorldBox;
    
    UEditPivotToolActionPropertySet();

    UFUNCTION()
    void WorldOrigin();
    
    UFUNCTION()
    void Top();
    
    UFUNCTION()
    void Right();
    
    UFUNCTION()
    void Left();
    
    UFUNCTION()
    void Front();
    
    UFUNCTION()
    void Center();
    
    UFUNCTION()
    void Bottom();
    
    UFUNCTION()
    void Back();
    
};

