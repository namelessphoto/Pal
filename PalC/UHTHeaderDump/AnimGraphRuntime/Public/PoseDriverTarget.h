#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "ERBFDistanceMethod.h"
#include "ERBFFunctionType.h"
#include "PoseDriverTransform.h"
#include "PoseDriverTarget.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FPoseDriverTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPoseDriverTransform> BoneTransforms;
    
    UPROPERTY(EditAnywhere)
    FRotator TargetRotation;
    
    UPROPERTY(EditAnywhere)
    float TargetScale;
    
    UPROPERTY(EditAnywhere)
    ERBFDistanceMethod DistanceMethod;
    
    UPROPERTY(EditAnywhere)
    ERBFFunctionType FunctionType;
    
    UPROPERTY(EditAnywhere)
    bool bApplyCustomCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve CustomCurve;
    
    UPROPERTY(EditAnywhere)
    FName DrivenName;
    
    UPROPERTY(EditAnywhere)
    bool bIsHidden;
    
    FPoseDriverTarget();
};

