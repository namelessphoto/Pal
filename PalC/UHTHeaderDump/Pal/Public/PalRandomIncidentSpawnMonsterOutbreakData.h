#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalDataTableRowName_PalMonsterData.h"
#include "Templates/SubclassOf.h"
#include "PalRandomIncidentSpawnMonsterOutbreakData.generated.h"

class APalAIController;
class UDataTable;
class UPalActionBase;

USTRUCT(BlueprintType)
struct FPalRandomIncidentSpawnMonsterOutbreakData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData CharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Num;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Group;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsSquad;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* LocationTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalAIController> ControllerClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalActionBase> DefaultActionClass;
    
    PAL_API FPalRandomIncidentSpawnMonsterOutbreakData();
};

