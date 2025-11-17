#pragma once
#include "CoreMinimal.h"
#include "StateStruct.generated.h"

USTRUCT()
struct NETCORE_API FStateStruct {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString StateName;
    
public:
    FStateStruct();
};

