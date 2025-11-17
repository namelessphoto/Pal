#pragma once
#include "CoreMinimal.h"
#include "EPalSupplyType.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalLevelObjectActor.h"
#include "PalMapObjectDropItemData.h"
#include "Templates/SubclassOf.h"
#include "PalSupplySpawner.generated.h"

class APalRandomIncidentSpawnerBase;

UCLASS(Abstract)
class PAL_API APalSupplySpawner : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_MapObjectData CapsuleMapObjectId;
    
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_FieldLotteryNameData CapsuleLotteryName;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_MapObjectData MeteorMapObjectId;
    
    UPROPERTY(EditDefaultsOnly)
    FPalMapObjectDropItemData MeteorPieceDropItemId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APalRandomIncidentSpawnerBase> IncidentPalClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APalRandomIncidentSpawnerBase> IncidentNPCClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeteorPieceHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeteorPieceRandomMinRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeteorPieceRandomMaxRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SafeAreaRadiusForBaseCamp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SafeAreaRadiusForActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalSupplyType ForceSupplyType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDebugDrawSupplyLimitArea;
    
public:
    APalSupplySpawner(const FObjectInitializer& ObjectInitializer);

};

