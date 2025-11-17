#pragma once
#include "CoreMinimal.h"
#include "PalPlayerSkinInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerSkinInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName Head;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName Body;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName Glider;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, NotReplicated)
    TMap<FName, FName> Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, NotReplicated)
    TMap<FName, FName> Pal;
    
    PAL_API FPalPlayerSkinInfo();
};

