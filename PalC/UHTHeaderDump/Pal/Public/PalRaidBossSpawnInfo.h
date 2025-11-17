#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "EPalStatusID.h"
#include "EPalWazaID.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "Templates/SubclassOf.h"
#include "PalRaidBossSpawnInfo.generated.h"

class APalAIController;

USTRUCT(BlueprintType)
struct FPalRaidBossSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData PalId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWazaID WarpWazaID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalWazaID> BaseCampAttackWazaIDs;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CanModeChange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalStatusID ModeChange_AddStatusToAllWhenModeChgange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalElementType ModeChange_Element1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalElementType ModeChange_Element2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> ModeChange_AddPassiveSkill;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalWazaID> ModeChange_AddWaza;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalWazaID> ModeChange_RemoveWaza;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalAIController> AIControllerClass;
    
    PAL_API FPalRaidBossSpawnInfo();
};

