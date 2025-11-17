#pragma once
#include "CoreMinimal.h"
#include "PalArenaCharacterOverrideStatus.generated.h"

USTRUCT()
struct FPalArenaCharacterOverrideStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bValid;
    
    UPROPERTY()
    int32 Level;
    
    UPROPERTY()
    int32 MaxHP;
    
    UPROPERTY()
    int32 Attack;
    
    UPROPERTY()
    int32 Defense;
    
    PAL_API FPalArenaCharacterOverrideStatus();
};

