#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Templates/SubclassOf.h"
#include "PalRandomIncidentSettings.generated.h"

class APalRandomIncidentObjectPlacement;
class UDataTable;
class UPalRandomIncidentActionBase;

USTRUCT(BlueprintType)
struct FPalRandomIncidentSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* MonsterSpawnData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* NPCSpawnData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ExcludeOtherPal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalRandomIncidentActionBase> action;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalRandomIncidentObjectPlacement> ObjectPlacement;
    
    PAL_API FPalRandomIncidentSettings();
};

