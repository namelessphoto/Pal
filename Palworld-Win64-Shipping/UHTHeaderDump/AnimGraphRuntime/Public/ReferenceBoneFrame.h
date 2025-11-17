#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=Axis -FallbackName=Axis
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "ReferenceBoneFrame.generated.h"

USTRUCT()
struct FReferenceBoneFrame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference bone;
    
    UPROPERTY(EditAnywhere)
    FAxis Axis;
    
    ANIMGRAPHRUNTIME_API FReferenceBoneFrame();
};

