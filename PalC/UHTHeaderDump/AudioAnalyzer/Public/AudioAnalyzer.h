#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AudioAnalyzer.generated.h"

class UAudioAnalyzerSubsystem;
class UAudioBus;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class AUDIOANALYZER_API UAudioAnalyzer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAudioBus* AudioBus;
    
private:
    UPROPERTY(Transient)
    UAudioAnalyzerSubsystem* AudioAnalyzerSubsystem;
    
public:
    UAudioAnalyzer();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    void StopAnalyzing(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    void StartAnalyzing(const UObject* WorldContextObject, UAudioBus* AudioBusToAnalyze);
    
};

