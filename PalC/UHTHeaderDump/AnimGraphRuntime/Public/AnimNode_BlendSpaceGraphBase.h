#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimGroupRole -FallbackName=EAnimGroupRole
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "AnimNode_BlendSpaceGraphBase.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAnimGroupRole> GroupRole;
    
    UPROPERTY()
    UBlendSpace* BlendSpace;
    
    UPROPERTY()
    TArray<FPoseLink> SamplePoseLinks;
    
public:
    FAnimNode_BlendSpaceGraphBase();
};

