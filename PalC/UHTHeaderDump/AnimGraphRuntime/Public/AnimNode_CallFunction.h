#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "EAnimFunctionCallSite.h"
#include "AnimNode_CallFunction.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FAnimNode_CallFunction : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPoseLink Source;
    
    UPROPERTY(EditAnywhere)
    EAnimFunctionCallSite CallSite;
    
    FAnimNode_CallFunction();
};

