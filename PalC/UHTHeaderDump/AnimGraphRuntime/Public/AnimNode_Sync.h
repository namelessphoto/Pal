#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimGroupRole -FallbackName=EAnimGroupRole
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "AnimNode_Sync.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FAnimNode_Sync : public FAnimNode_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FPoseLink Source;
    
    UPROPERTY(EditAnywhere)
    FName GroupName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAnimGroupRole> GroupRole;
    
public:
    FAnimNode_Sync();
};

