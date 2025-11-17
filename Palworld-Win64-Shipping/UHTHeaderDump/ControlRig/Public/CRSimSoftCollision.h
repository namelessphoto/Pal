#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ECRSimSoftCollisionType.h"
#include "EControlRigAnimEasingType.h"
#include "CRSimSoftCollision.generated.h"

USTRUCT(BlueprintType)
struct FCRSimSoftCollision {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(EditAnywhere)
    ECRSimSoftCollisionType ShapeType;
    
    UPROPERTY(EditAnywhere)
    float MinimumDistance;
    
    UPROPERTY(EditAnywhere)
    float MaximumDistance;
    
    UPROPERTY(EditAnywhere)
    EControlRigAnimEasingType FalloffType;
    
    UPROPERTY(EditAnywhere)
    float Coefficient;
    
    UPROPERTY(EditAnywhere)
    bool bInverted;
    
    CONTROLRIG_API FCRSimSoftCollision();
};

