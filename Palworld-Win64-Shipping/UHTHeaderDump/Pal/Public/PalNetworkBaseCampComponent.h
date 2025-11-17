#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalBaseCampModuleType.h"
#include "EPalLogType.h"
#include "EPalWorkSuitability.h"
#include "PalCharacterSlotId.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "PalItemId.h"
#include "PalItemSlotId.h"
#include "PalKillLogDisplayData.h"
#include "PalMealLogDisplayData.h"
#include "PalMonsterControllerBaseCampLogContent.h"
#include "PalNetArchive.h"
#include "PalNetworkBaseCampComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkBaseCampComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid BurningBaseCampLogId;
    
    UPROPERTY()
    TArray<FGuid> BurningBaseCampIds;
    
public:
    UPalNetworkBaseCampComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(Reliable, Server)
    void RequestUnassignWorkInBaseCamp_ToServer(const FGuid& BaseCampId, const FGuid& WorkId, const FPalInstanceID& IndividualId);
    
    UFUNCTION(Reliable, Server)
    void RequestSwapWorkerSlot_ToServer(const FGuid& BaseCampId, const FPalCharacterSlotId& SlotIdA, const FPalCharacterSlotId& SlotIdB, const FGuid& ByMapObjectInstanceId);
    
    UFUNCTION(Reliable, Server)
    void RequestReplicateBaseCampWork_ToServer(const FGuid& BaseCampId, const bool bReplicate);
    
    UFUNCTION(Reliable, Server)
    void RequestReplicateBaseCampItemStackInfo_ToServer(const FGuid& BaseCampId, const bool bReplicate);
    
    UFUNCTION(Reliable, Server)
    void RequestMoveWorkerToPalBox_ToServer(const FGuid& BaseCampId, const FPalCharacterSlotId& SlotId, const int32 CurrentPage, const FGuid& ByMapObjectInstanceId);
    
    UFUNCTION(Reliable, Server)
    void RequestMoveItemToInventory_ToServer(const FGuid& BaseCampId, const FPalItemId& ItemId, const int32 Num);
    
    UFUNCTION(Reliable, Server)
    void RequestMoveInventoryItemToBaseCamp_ToServer(const TArray<FPalItemSlotId>& InventoryItemSlotIds, const FGuid& BaseCampId);
    
    UFUNCTION(Reliable, Server)
    void RequestMoveCharacterToWorker_ToServer(const FGuid& BaseCampId, const FPalCharacterSlotId& SlotId, const FPalContainerId& ToContainerId, const FGuid& ByMapObjectInstanceId);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestModule_Server_void(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(Reliable, Server)
    void RequestModule_Server_int32(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(Reliable, Server)
    void RequestModule_Server_FVector(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(Reliable, Server)
    void RequestModule_Server_FPalNetArchive(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(Reliable, Server)
    void RequestModule_Server_bool(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, bool Value);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestFixedAssignWorkInBaseCamp_ToServer(const FGuid& BaseCampId, const FGuid& WorkId, const FPalInstanceID& IndividualId);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestChangeWorkSuitability_ToServer(const FPalInstanceID& TargetIndividualId, const EPalWorkSuitability WorkSuitability, const bool bOn);
    
    UFUNCTION(Reliable, Server)
    void RequestChangeBaseCampBattle_ToServer(const FPalInstanceID& TargetIndividualId, const bool bOn);
    
    UFUNCTION(Reliable, Server)
    void Request_Server_void(const FGuid& BaseCampId, const FName FunctionName);
    
    UFUNCTION(Reliable, Server)
    void Request_Server_int32(const FGuid& BaseCampId, const FName FunctionName, int32 Value);
    
    UFUNCTION(Reliable, Server)
    void Request_Server_FVector(const FGuid& BaseCampId, const FName FunctionName, FVector Value);
    
    UFUNCTION(Reliable, Server)
    void Request_Server_FPalNetArchive(const FGuid& BaseCampId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(Reliable, Server)
    void Request_Server_bool(const FGuid& BaseCampId, const FName FunctionName, bool Value);
    
protected:
    UFUNCTION(Client, Reliable)
    void RemoveBaseCampBurningLog_Client(const FGuid& BaseCampId);
    
public:
    UFUNCTION(Client, Reliable)
    void NotifyModule_RequestClient_void(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(Client, Reliable)
    void NotifyModule_RequestClient_int32(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(Client, Reliable)
    void NotifyModule_RequestClient_FVector(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(Client, Reliable)
    void NotifyModule_RequestClient_FPalNetArchive(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(Client, Reliable)
    void NotifyModule_RequestClient_bool(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, bool Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyModule_Multicast_void(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyModule_Multicast_int32(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyModule_Multicast_FVector(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyModule_Multicast_FPalNetArchive(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyModule_Multicast_bool(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, bool Value);
    
    UFUNCTION(Client, Reliable)
    void Notify_RequestClient_void(const FGuid& BaseCampId, const FName FunctionName);
    
    UFUNCTION(Client, Reliable)
    void Notify_RequestClient_int32(const FGuid& BaseCampId, const FName FunctionName, int32 Value);
    
    UFUNCTION(Client, Reliable)
    void Notify_RequestClient_FVector(const FGuid& BaseCampId, const FName FunctionName, FVector Value);
    
    UFUNCTION(Client, Reliable)
    void Notify_RequestClient_FPalNetArchive(const FGuid& BaseCampId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(Client, Reliable)
    void Notify_RequestClient_bool(const FGuid& BaseCampId, const FName FunctionName, bool Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void Notify_Multicast_void(const FGuid& BaseCampId, const FName FunctionName);
    
    UFUNCTION(NetMulticast, Reliable)
    void Notify_Multicast_int32(const FGuid& BaseCampId, const FName FunctionName, int32 Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void Notify_Multicast_FVector(const FGuid& BaseCampId, const FName FunctionName, FVector Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void Notify_Multicast_FPalNetArchive(const FGuid& BaseCampId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(NetMulticast, Reliable)
    void Notify_Multicast_bool(const FGuid& BaseCampId, const FName FunctionName, bool Value);
    
    UFUNCTION(Reliable, Server)
    void BroadcastRemoveBaseCampBurningLog_Server(const FGuid& BaseCampId);
    
    UFUNCTION(Reliable, Server)
    void BroadcastBaseCampWorkerMealLog_Server(const FPalMealLogDisplayData& DisplayData);
    
    UFUNCTION(Reliable, Server)
    void BroadcastBaseCampWorkerLog_Server(EPalLogType DisplayLogType, const FPalInstanceID& WorkerCharacterInstanceId, const FName& EventDataID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastBaseCampWorkerFriendshipRankupLog_Server(const FGuid& BaseCampId, const FPalInstanceID& IndividualId, int32 NewRank, const bool bIsFirstRankup);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BroadcastBaseCampLog_Server(const FPalMonsterControllerBaseCampLogContent& LogContent);
    
    UFUNCTION(Reliable, Server)
    void BroadcastAddBaseCampBurningLog_Server(const FGuid& BaseCampId);
    
    UFUNCTION(Client, Reliable)
    void AddBaseCampWorkerLowSanityLog_Client(const FPalInstanceID& WorkerCharacterInstanceId);
    
    UFUNCTION(Client, Reliable)
    void AddBaseCampWorkerLog_Client(EPalLogType DisplayLogType, const FPalInstanceID& WorkerCharacterInstanceId, const FName& EventDataID);
    
    UFUNCTION(Client, Reliable)
    void AddBaseCampWorkerFriendshipRankupLog_Client(const FPalInstanceID& IndividualId, int32 NewRank, const bool bIsFirstRankup);
    
    UFUNCTION(Client, Reliable)
    void AddBaseCampWorkerDeathLog_Client(const FPalKillLogDisplayData& DeathLogDisplayData);
    
    UFUNCTION(Client, Reliable)
    void AddBaseCampLog_Client(const FPalMonsterControllerBaseCampLogContent& LogContent);
    
protected:
    UFUNCTION(Client, Reliable)
    void AddBaseCampBurningLog_Client(const FGuid& BaseCampId);
    
};

