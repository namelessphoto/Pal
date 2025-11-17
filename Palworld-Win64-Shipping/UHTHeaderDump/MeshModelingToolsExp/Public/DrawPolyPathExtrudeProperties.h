#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EDrawPolyPathExtrudeDirection.h"
#include "DrawPolyPathExtrudeProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDrawPolyPathExtrudeDirection Direction;
    
    UDrawPolyPathExtrudeProperties();

};

