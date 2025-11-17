#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "AudioAnalyzerSubsystem.generated.h"

class UAudioAnalyzer;

UCLASS()
class AUDIOANALYZER_API UAudioAnalyzerSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UAudioAnalyzer*> AudioAnalyzers;
    
public:
    UAudioAnalyzerSubsystem();

};

