#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigElementKey -FallbackName=RigElementKey
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FBIKEndEffector.generated.h"

USTRUCT(BlueprintType)
struct FFBIKEndEffector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FRigElementKey Item;
    
    UPROPERTY()
    FVector Position;
    
    UPROPERTY()
    float PositionAlpha;
    
    UPROPERTY()
    int32 PositionDepth;
    
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    float RotationAlpha;
    
    UPROPERTY()
    int32 RotationDepth;
    
    UPROPERTY()
    float Pull;
    
    FULLBODYIK_API FFBIKEndEffector();
};

