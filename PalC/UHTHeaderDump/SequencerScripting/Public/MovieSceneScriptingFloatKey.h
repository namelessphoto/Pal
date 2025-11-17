#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveInterpMode -FallbackName=ERichCurveInterpMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveTangentMode -FallbackName=ERichCurveTangentMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveTangentWeightMode -FallbackName=ERichCurveTangentWeightMode
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingKey.h"
#include "MovieSceneScriptingFloatKey.generated.h"

UCLASS(Abstract, BlueprintType)
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey {
    GENERATED_BODY()
public:
    UMovieSceneScriptingFloatKey();

    UFUNCTION(BlueprintCallable)
    void SetValue(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaveTangentWeight(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaveTangent(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetArriveTangentWeight(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetArriveTangent(float InNewValue);
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    FFrameTime GetTime(ESequenceTimeUnit TimeUnit) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ERichCurveTangentMode> GetTangentMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetLeaveTangentWeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetLeaveTangent() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetArriveTangentWeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetArriveTangent() const;
    
};

