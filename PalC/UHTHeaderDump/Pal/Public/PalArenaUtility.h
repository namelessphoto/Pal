#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalArenaRank.h"
#include "EPalArenaSequencerOwnerType.h"
#include "PalArenaRule.h"
#include "PalArenaWorldRankingRecord.h"
#include "PalArenaUtility.generated.h"

class APalPlayerCharacter;
class UObject;
class UPalIndividualCharacterParameter;

UCLASS(BlueprintType)
class UPalArenaUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalArenaUtility();

    UFUNCTION(BlueprintPure)
    static bool IsServerOwnerType(EPalArenaSequencerOwnerType OwnerType);
    
    UFUNCTION(BlueprintPure)
    static bool IsRestrictedPal(const FPalArenaRule& Rule, UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayerOwnerType(EPalArenaSequencerOwnerType OwnerType);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetWorldRankingRecordCharacterNameText(const UObject* WorldContextObject, const FPalArenaWorldRankingRecord& Record);
    
    UFUNCTION(BlueprintPure)
    static EPalArenaRank GetReleasedSoloRank(const APalPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLocalPlayerArenaRankingInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPalArenaRank GetArenaRank(const UObject* WorldContextObject, int32 ArenaRankPoint);
    
};

