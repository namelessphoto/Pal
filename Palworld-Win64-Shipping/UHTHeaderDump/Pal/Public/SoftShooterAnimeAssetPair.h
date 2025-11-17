#pragma once
#include "CoreMinimal.h"
#include "SoftShooterAnimeAssetPair.generated.h"

class UPalShooterAnimeAssetBase;

USTRUCT()
struct FSoftShooterAnimeAssetPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UPalShooterAnimeAssetBase> FemaleAnim;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UPalShooterAnimeAssetBase> MaleAnim;
    
    PAL_API FSoftShooterAnimeAssetPair();
};

