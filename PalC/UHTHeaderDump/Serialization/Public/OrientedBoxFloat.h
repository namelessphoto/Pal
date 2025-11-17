#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "OrientedBoxFloat.generated.h"

USTRUCT()
struct FOrientedBoxFloat {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector3f Center;
    
    UPROPERTY()
    FVector3f AxisX;
    
    UPROPERTY()
    FVector3f AxisY;
    
    UPROPERTY()
    FVector3f AxisZ;
    
    UPROPERTY()
    float ExtentX;
    
    UPROPERTY()
    float ExtentY;
    
    UPROPERTY()
    float ExtentZ;
    
    SERIALIZATION_API FOrientedBoxFloat();
};

