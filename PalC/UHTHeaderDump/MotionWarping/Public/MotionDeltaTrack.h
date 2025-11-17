#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MotionDeltaTrack.generated.h"

USTRUCT()
struct FMotionDeltaTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> BoneTransformTrack;
    
    UPROPERTY()
    TArray<FVector> DeltaTranslationTrack;
    
    UPROPERTY()
    TArray<FRotator> DeltaRotationTrack;
    
    UPROPERTY()
    FVector TotalTranslation;
    
    UPROPERTY()
    FRotator TotalRotation;
    
    MOTIONWARPING_API FMotionDeltaTrack();
};

