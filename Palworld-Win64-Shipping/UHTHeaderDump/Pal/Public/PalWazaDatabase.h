#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalAdditionalEffectType.h"
#include "EPalElementType.h"
#include "EPalStatusID.h"
#include "EPalWazaID.h"
#include "PalWazaDatabaseRaw.h"
#include "PalWazaDatabase.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class UPalWazaDatabase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* WazaDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalAdditionalEffectType, EPalStatusID> AdditionalEffectToStatusID;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* WazaMasterLevel_DataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* WazaMasterTamago_DataTable;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalElementType, EPalWazaID> OtomoBoringTimeWazaID;
    
public:
    UPalWazaDatabase();

    UFUNCTION(BlueprintPure)
    bool IsExistMasterrableWaza_BetweenLevel(FName CharacterID, int32 StartLevel, int32 EndLevel);
    
    UFUNCTION(BlueprintPure)
    void GetMasterrableWaza_BetweenLevel(FName CharacterID, int32 StartLevel, int32 EndLevel, TMap<EPalWazaID, int32>& OutMap);
    
    UFUNCTION(BlueprintPure)
    bool FindWazaForBP(EPalWazaID Type, FPalWazaDatabaseRaw& OutData);
    
};

