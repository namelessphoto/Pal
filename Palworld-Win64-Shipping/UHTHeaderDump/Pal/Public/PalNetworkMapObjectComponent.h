#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalMapObjectConcreteModelModuleType.h"
#include "EPalMapObjectOperationResult.h"
#include "PalCellCoord.h"
#include "PalDamageInfo.h"
#include "PalFoliageInstanceId.h"
#include "PalNetArchive.h"
#include "PalNetworkMapObjectSpawnRequestParameter.h"
#include "PalNetworkMapObjectTickIntervalInBackgroundInfo.h"
#include "PalNetworkMapObjectComponent.generated.h"

class APalMapObjectSpawnerBase;
class UPalMapObjectPickableItemModelBase;
class UPalMapObjectSpawnRequestHandler;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkMapObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FGuid, FPalNetworkMapObjectSpawnRequestParameter> MapObjectSpawnRequestParameterMap;
    
    UPROPERTY(Transient)
    TMap<FGuid, UPalMapObjectSpawnRequestHandler*> SpawnRequestHandlerMap;
    
public:
    UPalNetworkMapObjectComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(Reliable, Server)
    void RequestRepair_ToServer(const FGuid& InstanceId);
    
    UFUNCTION(Reliable, Server)
    void RequestDismantleObject_ToServer(const FGuid& InstanceId);
    
    UFUNCTION(Reliable, Server)
    void RequestDamageMapObjectSpawner_ToServer(APalMapObjectSpawnerBase* TargetSpawnerActor, const FPalDamageInfo& DamageInfo);
    
    UFUNCTION(Reliable, Server)
    void RequestDamageMapObject_ToServer(const FGuid& InstanceId, const FPalDamageInfo& Info);
    
    UFUNCTION(Reliable, Server)
    void RequestDamageFoliage_ToServer(const FPalCellCoord& CellCoord, const FName ModelId, const TArray<FPalFoliageInstanceId>& InstanceIds, const FPalDamageInfo& DamageInfo);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestConcreteModelModule_Server_void(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(Reliable, Server)
    void RequestConcreteModelModule_Server_int32(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(Reliable, Server)
    void RequestConcreteModelModule_Server_FVector(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(Reliable, Server)
    void RequestConcreteModelModule_Server_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(Reliable, Server)
    void RequestConcreteModelModule_Server_bool(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, bool Value);
    
    UFUNCTION()
    void RequestConcreteModel_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestConcreteModel_Server_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName);
    
    UFUNCTION(Reliable, Server)
    void RequestConcreteModel_Server_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value);
    
    UFUNCTION(Reliable, Server)
    void RequestConcreteModel_Server_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value);
    
    UFUNCTION(Reliable, Server)
    void RequestConcreteModel_Server_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(Reliable, Server)
    void RequestConcreteModel_Server_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value);
    
public:
    UFUNCTION()
    void RequestConcreteModel_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value);
    
    UFUNCTION()
    void RequestConcreteModel_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value);
    
    UFUNCTION()
    void RequestConcreteModel_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION()
    void RequestConcreteModel_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestBuildCancel_ToServer(const FGuid& InstanceId);
    
    UFUNCTION(NetMulticast, Reliable)
    void RecieveDestroyMapObject_Multicast(const FGuid& InstanceId);
    
    UFUNCTION(Client, Reliable)
    void RecieveDamageMapObject_ToClient(const FGuid& InstanceId, const FPalDamageInfo& Info, const int32 DamagedHp);
    
    UFUNCTION(Client, Reliable)
    void ReceiveUpdateHp_ToClient(const FGuid& InstanceId, const int32 UpdatedHp);
    
    UFUNCTION(Client, Reliable)
    void ReceiveDismantleObjectResult_ToClient(const EPalMapObjectOperationResult Result, const FGuid& InstanceId);
    
public:
    UFUNCTION(Client, Reliable)
    void NotifyReceivePickupResultSuccess_ToClient(const FPalNetArchive& PickupItemArchive, UPalMapObjectPickableItemModelBase* Model, bool IsAllPickup);
    
    UFUNCTION(Client, Reliable)
    void NotifyReceivePickupResultFailed_ToClient(UPalMapObjectPickableItemModelBase* Model);
    
    UFUNCTION(Client, Reliable)
    void NotifyConcreteModelModule_RequestClient_void(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(Client, Reliable)
    void NotifyConcreteModelModule_RequestClient_int32(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(Client, Reliable)
    void NotifyConcreteModelModule_RequestClient_FVector(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(Client, Reliable)
    void NotifyConcreteModelModule_RequestClient_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(Client, Reliable)
    void NotifyConcreteModelModule_RequestClient_bool(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, bool Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyConcreteModelModule_Multicast_void(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyConcreteModelModule_Multicast_int32(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyConcreteModelModule_Multicast_FVector(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyConcreteModelModule_Multicast_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyConcreteModelModule_Multicast_bool(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, bool Value);
    
    UFUNCTION()
    void NotifyConcreteModel_ToRequestClient_void(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName);
    
    UFUNCTION()
    void NotifyConcreteModel_ToRequestClient_int32(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, int32 Value);
    
    UFUNCTION()
    void NotifyConcreteModel_ToRequestClient_FVector(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, FVector Value);
    
    UFUNCTION()
    void NotifyConcreteModel_ToRequestClient_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION()
    void NotifyConcreteModel_ToRequestClient_bool(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, bool Value);
    
    UFUNCTION()
    void NotifyConcreteModel_ToMulticast_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName);
    
    UFUNCTION()
    void NotifyConcreteModel_ToMulticast_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value);
    
    UFUNCTION()
    void NotifyConcreteModel_ToMulticast_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value);
    
    UFUNCTION()
    void NotifyConcreteModel_ToMulticast_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION()
    void NotifyConcreteModel_ToMulticast_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value);
    
private:
    UFUNCTION(Client, Reliable)
    void NotifyConcreteModel_RequestClient_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName);
    
    UFUNCTION(Client, Reliable)
    void NotifyConcreteModel_RequestClient_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value);
    
    UFUNCTION(Client, Reliable)
    void NotifyConcreteModel_RequestClient_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value);
    
    UFUNCTION(Client, Reliable)
    void NotifyConcreteModel_RequestClient_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(Client, Reliable)
    void NotifyConcreteModel_RequestClient_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyConcreteModel_Multicast_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyConcreteModel_Multicast_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyConcreteModel_Multicast_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyConcreteModel_Multicast_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyConcreteModel_Multicast_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value);
    
    UFUNCTION(Reliable, Server)
    void Dev_RequestDismantleMapObject_ToServer(const FGuid& InstanceId);
    
    UFUNCTION(Client, Reliable)
    void Dev_ReceiveMapObjectsTickIntervalInBackground_ToClient(const TArray<FPalNetworkMapObjectTickIntervalInBackgroundInfo>& TickIntervalInfoArray);
    
    UFUNCTION(Client, Reliable)
    void Dev_ReceiveDismantleMapObjectResult_ToClient(const FString& ResultMessage);
    
    UFUNCTION(Reliable, Server)
    void Dev_FetchMapObjectsTickIntervalInBackground_ToServer();
    
public:
    UFUNCTION(Reliable, Server)
    void BroadcastStartTeamMissionLog_ToServer(const FGuid& ConcreteModelInstanceId);
    
    UFUNCTION(Client, Reliable)
    void AddStartTeamMissionLog_ToServer();
    
};

