#pragma once
#include "CoreMinimal.h"
#include "StatePerObjectConfig.h"
#include "EscalationManagerConfig.generated.h"

UCLASS()
class NETCORE_API UEscalationManagerConfig : public UStatePerObjectConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TArray<FString> EscalationSeverity;
    
    UEscalationManagerConfig();

};

