#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimGroupRole -FallbackName=EAnimGroupRole
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimSyncMethod -FallbackName=EAnimSyncMethod
#include "AnimNode_SequenceEvaluatorBase.h"
#include "ESequenceEvalReinit.h"
#include "AnimNode_SequenceEvaluator_Standalone.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase {
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
    UAnimSequenceBase* Sequence;
    
    UPROPERTY(EditAnywhere)
    float ExplicitTime;
    
    UPROPERTY(EditAnywhere)
    bool bShouldLoop;
    
    UPROPERTY(EditAnywhere)
    bool bTeleportToExplicitTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESequenceEvalReinit> ReinitializationBehavior;
    
    UPROPERTY(EditAnywhere)
    float StartPosition;
    
public:
    FAnimNode_SequenceEvaluator_Standalone();
};

