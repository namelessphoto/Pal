#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectStaticData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName DummyFoliageMapObjectId;
    
    UPROPERTY(EditDefaultsOnly)
    FName DropItem3DMapObjectId;
    
    UPROPERTY(EditDefaultsOnly)
    FName DropItem3DSKMapObjectId;
    
    UPROPERTY(EditDefaultsOnly)
    FName BuildObjectId_PalStorage;
    
    UPROPERTY(EditDefaultsOnly)
    FName MapObjectId_ItemChest;
    
    UPROPERTY(EditDefaultsOnly)
    FName MapObjectId_DeathPenalty;
    
    UPROPERTY(EditDefaultsOnly)
    FName MapObjectId_DroppedCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    FName MapObjectId_TreasureBox_VisibleContent;
    
    UPROPERTY(EditDefaultsOnly)
    FName MapObjectId_SkillFruit_VisibleContent;
    
    PAL_API FPalMapObjectStaticData();
};

