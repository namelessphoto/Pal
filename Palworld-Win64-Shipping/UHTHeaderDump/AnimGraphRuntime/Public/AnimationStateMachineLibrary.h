#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimUpdateContext -FallbackName=AnimUpdateContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAlphaBlendOption -FallbackName=EAlphaBlendOption
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETransitionLogicType -FallbackName=ETransitionLogicType
#include "AnimationStateMachineReference.h"
#include "AnimationStateResultReference.h"
#include "AnimationStateMachineLibrary.generated.h"

class UBlendProfile;
class UCurveFloat;

UCLASS(BlueprintType)
class ANIMGRAPHRUNTIME_API UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationStateMachineLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetState(const FAnimUpdateContext& UpdateContext, const FAnimationStateMachineReference& Node, FName TargetState, float Duration, TEnumAsByte<ETransitionLogicType> BlendType, UBlendProfile* BlendProfile, EAlphaBlendOption AlphaBlendOption, UCurveFloat* CustomBlendCurve);
    
    UFUNCTION(BlueprintPure)
    static bool IsStateBlendingOut(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    
    UFUNCTION(BlueprintPure)
    static bool IsStateBlendingIn(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    
    UFUNCTION(BlueprintPure)
    static FName GetState(const FAnimUpdateContext& UpdateContext, const FAnimationStateMachineReference& Node);
    
    UFUNCTION(BlueprintPure)
    static float GetRelevantAnimTimeRemainingFraction(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    
    UFUNCTION(BlueprintPure)
    static float GetRelevantAnimTimeRemaining(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    
    UFUNCTION(BlueprintPure)
    static void ConvertToAnimationStateResultPure(const FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertToAnimationStateResult(const FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, EAnimNodeReferenceConversionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static void ConvertToAnimationStateMachinePure(const FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertToAnimationStateMachine(const FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, EAnimNodeReferenceConversionResult& Result);
    
};

