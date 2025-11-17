#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KShapeElem -FallbackName=KShapeElem
#include "PhysicsConvexData.generated.h"

USTRUCT(BlueprintType)
struct MESHMODELINGTOOLSEXP_API FPhysicsConvexData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 NumVertices;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumFaces;
    
    UPROPERTY(VisibleAnywhere)
    FKShapeElem Element;
    
    FPhysicsConvexData();
};

