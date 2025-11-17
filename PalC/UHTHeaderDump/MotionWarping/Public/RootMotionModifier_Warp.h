#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAlphaBlendOption -FallbackName=EAlphaBlendOption
#include "EMotionWarpRotationType.h"
#include "EWarpPointAnimProvider.h"
#include "RootMotionModifier.h"
#include "RootMotionModifier_Warp.generated.h"

class UCurveFloat;

UCLASS(Abstract, EditInlineNew)
class MOTIONWARPING_API URootMotionModifier_Warp : public URootMotionModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName WarpTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWarpPointAnimProvider WarpPointAnimProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform WarpPointAnimTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName WarpPointAnimBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWarpTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreZAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAlphaBlendOption AddTranslationEasingFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* AddTranslationEasingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWarpRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMotionWarpRotationType RotationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WarpRotationTimeMultiplier;
    
protected:
    UPROPERTY()
    FTransform CachedTargetTransform;
    
public:
    URootMotionModifier_Warp();

};

