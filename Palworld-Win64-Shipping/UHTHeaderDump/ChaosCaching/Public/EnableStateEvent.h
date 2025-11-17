#pragma once
#include "CoreMinimal.h"
#include "CacheEventBase.h"
#include "EnableStateEvent.generated.h"

USTRUCT()
struct FEnableStateEvent : public FCacheEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Index;
    
    UPROPERTY()
    bool bEnable;
    
    CHAOSCACHING_API FEnableStateEvent();
};

