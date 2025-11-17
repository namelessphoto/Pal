#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalPlayerDataEquipLanternData.h"
#include "PalPlayerDataInventoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerDataInventoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FPalContainerId CommonContainerId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FPalContainerId DropSlotContainerId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FPalContainerId EssentialContainerId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FPalContainerId WeaponLoadOutContainerId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FPalContainerId PlayerEquipArmorContainerId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FPalContainerId FoodEquipContainerId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FPalPlayerDataEquipLanternData LanternEquipData;
    
    PAL_API FPalPlayerDataInventoryInfo();
};

