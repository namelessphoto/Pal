#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalCharacterContainerOperationResult.h"
#include "PalCharacterContainerSortInfo.h"
#include "PalCharacterSlotId.h"
#include "PalContainerId.h"
#include "PalNetworkCharacterContainerParameter.h"
#include "PalNetworkCharacterContainerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkCharacterContainerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FGuid, FPalNetworkCharacterContainerParameter> ContainerParamMap;
    
public:
    UPalNetworkCharacterContainerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(Reliable, Server)
    void RequestUnlockSlot_ToServer(const FGuid& RequestID, const FPalCharacterSlotId& SlotId);
    
    UFUNCTION(Reliable, Server)
    void RequestSwap_ToServer_Rep(const FPalCharacterSlotId& SlotIdA, const FPalCharacterSlotId& SlotIdB);
    
    UFUNCTION(Reliable, Server)
    void RequestSortContainer_ToServer(const FPalContainerId& ContainerId, const FPalCharacterContainerSortInfo& SortInfo);
    
    UFUNCTION(Reliable, Server)
    void RequestMoveToPalBox_ToServer_Rep(const FPalCharacterSlotId& SlotId, const FPalContainerId& ContainerId, const int32 CurrentPage);
    
    UFUNCTION(Reliable, Server)
    void RequestMove_ToServer_Rep(const FPalCharacterSlotId& SlotId, const FPalContainerId& ContainerId);
    
    UFUNCTION(Reliable, Server)
    void RequestEmptySlot_ToServer_Rep(const FPalCharacterSlotId& SlotId);
    
    UFUNCTION(Client, Reliable)
    void RecieveUnlockSlot_ToRequestClient(const FGuid& RequestID, const EPalCharacterContainerOperationResult Result);
    
    UFUNCTION(Client, Reliable)
    void RecieveUnlockSlot_ToClient(const FPalCharacterSlotId& SlotId);
    
};

