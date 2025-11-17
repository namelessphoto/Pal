#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectMotionFilterSettings.h"
#include "SourceEffectMotionFilterPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectMotionFilterPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectMotionFilterSettings Settings;
    
    USourceEffectMotionFilterPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectMotionFilterSettings& InSettings);
    
};

