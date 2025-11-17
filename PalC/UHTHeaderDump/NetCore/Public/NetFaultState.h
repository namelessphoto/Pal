#pragma once
#include "CoreMinimal.h"
#include "EscalationState.h"
#include "NetFaultState.generated.h"

USTRUCT()
struct NETCORE_API FNetFaultState : public FEscalationState {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    bool bCloseConnection;
    
    UPROPERTY(Config)
    int16 EscalateQuotaFaultsPerPeriod;
    
    UPROPERTY(Config)
    int8 EscalateQuotaFaultPercentPerPeriod;
    
    UPROPERTY(Config)
    int16 DescalateQuotaFaultsPerPeriod;
    
    UPROPERTY(Config)
    int8 DescalateQuotaFaultPercentPerPeriod;
    
    UPROPERTY(Config)
    int8 EscalateQuotaTimePeriod;
    
    FNetFaultState();
};

