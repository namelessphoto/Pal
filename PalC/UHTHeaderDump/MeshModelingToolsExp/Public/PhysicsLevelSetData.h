#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KShapeElem -FallbackName=KShapeElem
#include "PhysicsLevelSetData.generated.h"

USTRUCT(BlueprintType)
struct MESHMODELINGTOOLSEXP_API FPhysicsLevelSetData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FKShapeElem Element;
    
    FPhysicsLevelSetData();
};

