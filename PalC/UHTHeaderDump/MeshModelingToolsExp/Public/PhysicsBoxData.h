#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KShapeElem -FallbackName=KShapeElem
#include "PhysicsBoxData.generated.h"

USTRUCT(BlueprintType)
struct MESHMODELINGTOOLSEXP_API FPhysicsBoxData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FVector Dimensions;
    
    UPROPERTY(VisibleAnywhere)
    FTransform Transform;
    
    UPROPERTY(VisibleAnywhere)
    FKShapeElem Element;
    
    FPhysicsBoxData();
};

