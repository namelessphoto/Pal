#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=EHoleFillOpFillType -FallbackName=EHoleFillOpFillType
#include "HoleFillToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UHoleFillToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EHoleFillOpFillType FillType;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveIsolatedTriangles;
    
    UPROPERTY(EditAnywhere)
    bool bQuickFillSmallHoles;
    
    UHoleFillToolProperties();

};

