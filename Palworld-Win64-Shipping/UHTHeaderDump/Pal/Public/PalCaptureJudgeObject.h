#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CaptureResult.h"
#include "PalCaptureJudgeObject.generated.h"

class APalCharacter;

UCLASS()
class APalCaptureJudgeObject : public AActor {
    GENERATED_BODY()
public:
    APalCaptureJudgeObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void OnSuccessFinish();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnFailedFinish();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnFailedByTest(const APalCharacter* Character, FCaptureResult Result);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnFailedByMP(const APalCharacter* Character, FCaptureResult Result);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCaptureSuccess(const APalCharacter* Character, FCaptureResult Result);
    
private:
    UFUNCTION(Reliable, Server)
    void ChallengeCapture_ToServer(APalCharacter* Character, float capturePower);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChallengeCapture(APalCharacter* Character, float capturePower);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void CaptureResult_ToALL(APalCharacter* Character, FCaptureResult Result);
    
};

