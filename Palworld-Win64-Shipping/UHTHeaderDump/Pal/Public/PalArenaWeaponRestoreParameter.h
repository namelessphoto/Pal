#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalArenaWeaponRestoreParameter.generated.h"

USTRUCT()
struct FPalArenaWeaponRestoreParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalItemId ItemId;
    
    UPROPERTY()
    int32 BulletNum;
    
    PAL_API FPalArenaWeaponRestoreParameter();
};

