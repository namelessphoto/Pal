#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "Templates/SubclassOf.h"
#include "PalRandomIncidentSpawnNPCData.generated.h"

class APalAIController;
class UPalAIActionBase;

USTRUCT(BlueprintType)
struct FPalRandomIncidentSpawnNPCData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PalHumanData CharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_NPCUniqueData UniqueNPCID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData OtomoName;
    
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
    FName WalkPathName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalAIController> ControllerClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalAIActionBase> DefaultAIActionClass;
    
    PAL_API FPalRandomIncidentSpawnNPCData();
};

