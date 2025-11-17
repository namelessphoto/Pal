#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=InteractiveToolActivity -FallbackName=InteractiveToolActivity
#include "PolyEditInsertEdgeLoopActivity.generated.h"

class UEdgeLoopInsertionProperties;
class UPolyEditActivityContext;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UPolyEditInsertEdgeLoopActivity : public UInteractiveToolActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UEdgeLoopInsertionProperties* Settings;
    
    UPROPERTY()
    UPolyEditActivityContext* ActivityContext;
    
public:
    UPolyEditInsertEdgeLoopActivity();

};

