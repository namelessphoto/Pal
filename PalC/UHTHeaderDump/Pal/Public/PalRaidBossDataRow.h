#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalRaidBossSpawnInfo.h"
#include "PalRaidBossSuccessAnyOneItemInfo.h"
#include "PalRaidBossSuccessItemInfo.h"
#include "PalRaidBossSummonMeteorInfo.h"
#include "Templates/SubclassOf.h"
#include "PalRaidBossDataRow.generated.h"

class AActor;
class APalRaidBossSummonGeneratorBase;

USTRUCT(BlueprintType)
struct FPalRaidBossDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalRaidBossSpawnInfo> InfoList;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalRaidBossSummonMeteorInfo> SummonMeteor_Num;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalRaidBossSummonGeneratorBase> SummonGeneratorClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FPalDataTableRowName_PalMonsterData, float> EggPalIDAndWeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalRaidBossSuccessItemInfo> SuccessItemList;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalRaidBossSuccessAnyOneItemInfo> SuccessAnyOneItemList;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString AchievementId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> OverrideRaidBossBattleActorClass;
    
    PAL_API FPalRaidBossDataRow();
};

