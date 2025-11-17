#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "AnimNode_MirrorBase.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FAnimNode_MirrorBase : public FAnimNode_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPoseLink Source;
    
public:
    FAnimNode_MirrorBase();
};

