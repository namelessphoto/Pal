#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditBevelEdgeActivity.generated.h"

class UPolyEditActivityContext;
class UPolyEditBevelEdgeProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditBevelEdgeActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPolyEditBevelEdgeProperties* BevelProperties;
    
protected:
    UPROPERTY()
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditBevelEdgeActivity();

};

