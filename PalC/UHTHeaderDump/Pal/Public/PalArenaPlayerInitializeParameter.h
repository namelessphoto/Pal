#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalArenaPlayerIndex.h"
#include "EPalArenaRank.h"
#include "PalInstanceID.h"
#include "PalArenaPlayerInitializeParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaPlayerInitializeParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalArenaPlayerIndex PlayerIndex;
    
    UPROPERTY()
    FGuid PlayerUId;
    
    UPROPERTY()
    FPalInstanceID PlayerIndividualId;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FPalInstanceID> OtomoIndividualIdList;
    
    UPROPERTY()
    EPalArenaRank ArenaRank;
    
    UPROPERTY()
    bool bIsNpc;
    
    UPROPERTY()
    TArray<FPalInstanceID> OtomoPicks;
    
    UPROPERTY()
    bool bPartySelected;
    
    PAL_API FPalArenaPlayerInitializeParameter();
};

