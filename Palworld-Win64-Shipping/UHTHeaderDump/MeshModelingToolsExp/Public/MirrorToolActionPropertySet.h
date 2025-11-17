#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MirrorToolActionPropertySet.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMirrorToolActionPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UMirrorToolActionPropertySet();

    UFUNCTION()
    void Up();
    
    UFUNCTION()
    void ShiftToCenter();
    
    UFUNCTION()
    void Right();
    
    UFUNCTION()
    void Left();
    
    UFUNCTION()
    void Forward();
    
    UFUNCTION()
    void Down();
    
    UFUNCTION()
    void Backward();
    
};

