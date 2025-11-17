#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EAlignObjectsAlignToOptions.h"
#include "EAlignObjectsAlignTypes.h"
#include "EAlignObjectsBoxPoint.h"
#include "AlignObjectsToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UAlignObjectsToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAlignObjectsAlignTypes AlignType;
    
    UPROPERTY(EditAnywhere)
    EAlignObjectsAlignToOptions AlignTo;
    
    UPROPERTY(EditAnywhere)
    EAlignObjectsBoxPoint BoxPosition;
    
    UPROPERTY(EditAnywhere)
    bool bAlignX;
    
    UPROPERTY(EditAnywhere)
    bool bAlignY;
    
    UPROPERTY(EditAnywhere)
    bool bAlignZ;
    
    UAlignObjectsToolProperties();

};

