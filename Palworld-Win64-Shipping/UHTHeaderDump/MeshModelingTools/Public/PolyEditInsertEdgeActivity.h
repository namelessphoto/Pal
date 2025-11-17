#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditInsertEdgeActivity.generated.h"

class UGroupEdgeInsertionProperties;
class UPolyEditActivityContext;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditInsertEdgeActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGroupEdgeInsertionProperties* Settings;
    
    UPROPERTY()
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditInsertEdgeActivity();

};

