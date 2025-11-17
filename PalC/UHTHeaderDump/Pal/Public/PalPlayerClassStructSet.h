#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PalPlayerClassStructSet.generated.h"

class UPalPlayerDataCharacterMake;
class UPalPlayerInventoryData;
class UPalPlayerRecordData;
class UPalPlayerSkinData;
class UPalQuestManager;
class UPalWorldMapUIData;

USTRUCT(BlueprintType)
struct FPalPlayerClassStructSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPlayerDataCharacterMake> CharacterMakeDataClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPlayerRecordData> RecordDataClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalWorldMapUIData> WorldMapUIDataClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPlayerInventoryData> InventoryDataClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPlayerSkinData> PlayerSkinDataClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalQuestManager> QuestManagerClass;
    
    PAL_API FPalPlayerClassStructSet();
};

