#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PBIKEffector.generated.h"

USTRUCT()
struct FPBIKEffector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName bone;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(EditAnywhere)
    float PositionAlpha;
    
    UPROPERTY(EditAnywhere)
    float RotationAlpha;
    
    UPROPERTY(EditAnywhere)
    float StrengthAlpha;
    
    UPROPERTY(EditAnywhere)
    float PullChainAlpha;
    
    UPROPERTY(EditAnywhere)
    float PinRotation;
    
    PBIK_API FPBIKEffector();
};

