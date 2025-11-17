#pragma once
#include "CoreMinimal.h"
#include "StateStruct.h"
#include "EscalationState.generated.h"

USTRUCT()
struct NETCORE_API FEscalationState : public FStateStruct {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    bool bLogEscalate;
    
    UPROPERTY(Config)
    bool bDormant;
    
    UPROPERTY(Config)
    int16 CooloffTime;
    
    UPROPERTY(Config)
    int16 AutoEscalateTime;
    
protected:
    UPROPERTY()
    int8 HighestTimePeriod;
    
    UPROPERTY()
    TArray<int8> AllTimePeriods;
    
public:
    FEscalationState();
};

