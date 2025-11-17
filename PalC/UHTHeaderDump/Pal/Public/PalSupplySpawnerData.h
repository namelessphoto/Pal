#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EPalMapObjectOperationResult.h"
#include "EPalSupplyType.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectDropItemData.h"
#include "PalSupplyInfo.h"
#include "Templates/SubclassOf.h"
#include "PalSupplySpawnerData.generated.h"

class AActor;
class APalMapObject;
class APalNPCSpawnerBase;
class APalRandomIncidentSpawnerBase;
class APalSupplyDropActor;

UCLASS(BlueprintType)
class PAL_API UPalSupplySpawnerData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FPalDataTableRowName_MapObjectData CapsuleMapObjectId;
    
    UPROPERTY(Transient)
    FPalDataTableRowName_FieldLotteryNameData CapsuleLotteryName;
    
    UPROPERTY(Transient)
    FPalDataTableRowName_MapObjectData MeteorMapObjectId;
    
    UPROPERTY(Transient)
    FPalMapObjectDropItemData MeteorPieceDropItemId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<APalRandomIncidentSpawnerBase> IncidentPalClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<APalRandomIncidentSpawnerBase> IncidentNPCClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SpawnHeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MeteorPieceHeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MeteorPieceRandomMinRange;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MeteorPieceRandomMaxRange;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SafeAreaRadiusForBaseCamp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SafeAreaRadiusForActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EPalSupplyType ForceSupplyType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bDebugDrawSupplyLimitArea;
    
    UPROPERTY(Transient)
    FGuid SupplyMapObjectModelInstanceId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APalRandomIncidentSpawnerBase* PalIncidentSpawner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APalRandomIncidentSpawnerBase* NPCIncidentSpawner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APalNPCSpawnerBase* PalSpawner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APalNPCSpawnerBase* NPCSpawner;
    
    UPROPERTY(Replicated, Transient)
    APalSupplyDropActor* DropActor;
    
    UPROPERTY(Replicated, Transient)
    FGuid LevelObjectInstanceId;
    
    UPROPERTY(Replicated, Transient)
    FTransform Transform;
    
    UPalSupplySpawnerData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RegisterNPCSpawner(APalNPCSpawnerBase* InSpawner, bool bPalSpawner);
    
protected:
    UFUNCTION()
    void PieceSpawned(FGuid ItemGuid, EPalMapObjectOperationResult Result);
    
    UFUNCTION()
    void OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
    UFUNCTION()
    void OnFinishedSpawningMapObjectActor(APalMapObject* MapObject);
    
    UFUNCTION()
    void OnDestroyedMapObject(AActor* DestroyActor);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastSupplyStart(FPalSupplyInfo Info, FTransform InLocationTransform, float DistanceLimit);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastSupplyEnd(FPalSupplyInfo Info, FTransform InLocationTransform, float DistanceLimit);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastDestroyDropActor(FGuid InSupplyMapObjectId, bool bForceDestroy);
    
};

