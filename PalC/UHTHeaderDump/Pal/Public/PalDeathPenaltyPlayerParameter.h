#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDeathPenaltyPlayerParameter.generated.h"

class APalPlayerState;
class UPalIndividualCharacterSlot;
class UPalPlayerInventoryData;

USTRUCT()
struct FPalDeathPenaltyPlayerParameter {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGuid PlayerUId;
    
    UPROPERTY(Transient)
    UPalPlayerInventoryData* Inventory;
    
    UPROPERTY(Transient)
    TArray<UPalIndividualCharacterSlot*> OtomoSlots;
    
    UPROPERTY(Transient)
    APalPlayerState* PlayerState;
    
    PAL_API FPalDeathPenaltyPlayerParameter();
};

