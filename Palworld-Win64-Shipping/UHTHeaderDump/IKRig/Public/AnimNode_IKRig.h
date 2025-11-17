#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_CustomProperty -FallbackName=AnimNode_CustomProperty
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimAlphaInputType -FallbackName=EAnimAlphaInputType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAlphaBoolBlend -FallbackName=InputAlphaBoolBlend
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBias -FallbackName=InputScaleBias
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBiasClamp -FallbackName=InputScaleBiasClamp
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "IKRigGoal.h"
#include "AnimNode_IKRig.generated.h"

class UIKRigDefinition;
class UIKRigProcessor;

USTRUCT(BlueprintType)
struct IKRIG_API FAnimNode_IKRig : public FAnimNode_CustomProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPoseLink Source;
    
    UPROPERTY(EditAnywhere)
    UIKRigDefinition* RigDefinitionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIKRigGoal> Goals;
    
    UPROPERTY(EditAnywhere)
    bool bStartFromRefPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnimAlphaInputType AlphaInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlphaBoolEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputAlphaBoolBlend AlphaBoolBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AlphaCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    
private:
    UPROPERTY(Transient)
    UIKRigProcessor* IKRigProcessor;
    
    UPROPERTY(Transient)
    float ActualAlpha;
    
public:
    FAnimNode_IKRig();
};

