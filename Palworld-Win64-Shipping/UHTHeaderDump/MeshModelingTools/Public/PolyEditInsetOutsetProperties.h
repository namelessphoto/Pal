#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PolyEditInsetOutsetProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditInsetOutsetProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Softness;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bBoundaryOnly;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float AreaScale;
    
    UPROPERTY(EditAnywhere)
    bool bReproject;
    
    UPROPERTY()
    bool bOutset;
    
    UPolyEditInsetOutsetProperties();

};

