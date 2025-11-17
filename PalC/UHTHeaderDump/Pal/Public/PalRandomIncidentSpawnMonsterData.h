#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalDataTableRowName_PalMonsterData.h"
#include "Templates/SubclassOf.h"
#include "PalRandomIncidentSpawnMonsterData.generated.h"

class APalAIController;
class UPalActionBase;

USTRUCT(BlueprintType)
struct FPalRandomIncidentSpawnMonsterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData CharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Group;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsSquad;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D SpawnLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpawnRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RotZ_Degree;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalAIController> ControllerClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalActionBase> DefaultActionClass;
    
    PAL_API FPalRandomIncidentSpawnMonsterData();
};

