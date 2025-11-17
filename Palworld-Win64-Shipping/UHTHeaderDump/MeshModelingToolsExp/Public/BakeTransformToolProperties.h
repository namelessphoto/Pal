#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EBakeScaleMethod.h"
#include "BakeTransformToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeTransformToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bBakeRotation;
    
    UPROPERTY(EditAnywhere)
    EBakeScaleMethod BakeScale;
    
    UPROPERTY(EditAnywhere)
    bool bRecenterPivot;
    
    UPROPERTY(VisibleAnywhere)
    bool bAllowNoScale;
    
    UBakeTransformToolProperties();

};

