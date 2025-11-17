#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KShapeElem -FallbackName=KShapeElem
#include "PhysicsSphereData.generated.h"

USTRUCT(BlueprintType)
struct MESHMODELINGTOOLSEXP_API FPhysicsSphereData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float Radius;
    
    UPROPERTY(VisibleAnywhere)
    FTransform Transform;
    
    UPROPERTY(VisibleAnywhere)
    FKShapeElem Element;
    
    FPhysicsSphereData();
};

