#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "FBIKDebugOption.generated.h"

USTRUCT()
struct FFBIKDebugOption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDrawDebugHierarchy;
    
    UPROPERTY(EditAnywhere)
    bool bColorAngularMotionStrength;
    
    UPROPERTY(EditAnywhere)
    bool bColorLinearMotionStrength;
    
    UPROPERTY(EditAnywhere)
    bool bDrawDebugAxes;
    
    UPROPERTY(EditAnywhere)
    bool bDrawDebugEffector;
    
    UPROPERTY(EditAnywhere)
    bool bDrawDebugConstraints;
    
    UPROPERTY(EditAnywhere)
    FTransform DrawWorldOffset;
    
    UPROPERTY(EditAnywhere)
    float DrawSize;
    
    FULLBODYIK_API FFBIKDebugOption();
};

