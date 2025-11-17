#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimGroupRole -FallbackName=EAnimGroupRole
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimSyncMethod -FallbackName=EAnimSyncMethod
#include "AnimNode_BlendSpacePlayerBase.h"
#include "AnimNode_BlendSpacePlayer_Standalone.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendSpacePlayer_Standalone : public FAnimNode_BlendSpacePlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName GroupName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAnimGroupRole> GroupRole;
    
    UPROPERTY(EditAnywhere)
    EAnimSyncMethod Method;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreForRelevancyTest;
    
    UPROPERTY(EditAnywhere)
    float X;
    
    UPROPERTY(EditAnywhere)
    float Y;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    bool bLoop;
    
    UPROPERTY(EditAnywhere)
    bool bResetPlayTimeWhenBlendSpaceChanges;
    
    UPROPERTY(EditAnywhere)
    float StartPosition;
    
    UPROPERTY(EditAnywhere)
    UBlendSpace* BlendSpace;
    
public:
    FAnimNode_BlendSpacePlayer_Standalone();
};

