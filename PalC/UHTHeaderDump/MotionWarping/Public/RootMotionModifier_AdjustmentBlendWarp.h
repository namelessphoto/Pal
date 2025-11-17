#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimSequenceTrackContainer -FallbackName=AnimSequenceTrackContainer
#include "RootMotionModifier_Warp.h"
#include "RootMotionModifier_AdjustmentBlendWarp.generated.h"

UCLASS(EditInlineNew, HideDropdown)
class MOTIONWARPING_API URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWarpIKBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> IKBones;
    
protected:
    UPROPERTY()
    FTransform CachedMeshTransform;
    
    UPROPERTY()
    FTransform CachedMeshRelativeTransform;
    
    UPROPERTY()
    FTransform CachedRootMotion;
    
    UPROPERTY()
    FAnimSequenceTrackContainer Result;
    
public:
    URootMotionModifier_AdjustmentBlendWarp();

};

