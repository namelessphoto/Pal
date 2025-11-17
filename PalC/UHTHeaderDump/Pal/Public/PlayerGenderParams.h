#pragma once
#include "CoreMinimal.h"
#include "EPalWeaponType.h"
#include "PlayerGenderParams.generated.h"

class APalWeaponBase;
class UPalShooterAnimeAssetBase;

USTRUCT(BlueprintType)
struct FPlayerGenderParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalWeaponType, TSoftClassPtr<UPalShooterAnimeAssetBase>> DefaultWeaponAnimeAssetBPSoftClassMap;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSoftClassPtr<APalWeaponBase>, TSoftClassPtr<UPalShooterAnimeAssetBase>> OtherWeaponAnimeAssetBPSoftClassMap;
    
    UPROPERTY(EditDefaultsOnly)
    float ClavicleAdjustDegree;
    
    PAL_API FPlayerGenderParams();
};

