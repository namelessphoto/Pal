#pragma once
#include "CoreMinimal.h"
#include "PocketpairPlatformID.generated.h"

USTRUCT()
struct POCKETPAIRUSER_API FPocketpairPlatformID {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 AccountID;
    
    UPROPERTY()
    uint32 AccountInstance;
    
    UPROPERTY()
    int32 Universe;
    
    UPROPERTY()
    int32 AccountType;
    
    FPocketpairPlatformID();
};

