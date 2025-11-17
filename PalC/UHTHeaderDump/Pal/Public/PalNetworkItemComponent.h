#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalContainerId.h"
#include "PalItemSlotId.h"
#include "PalItemSlotIdAndNum.h"
#include "PalNetworkContainerParameter.h"
#include "PalNetworkDynamicItemParameter.h"
#include "PalNetworkItemOperationParameter.h"
#include "PalNetworkParameter.h"
#include "PalNetworkItemComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkItemComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FGuid, FPalNetworkDynamicItemParameter> DynamicItemParamMap;
    
    UPROPERTY()
    TMap<FGuid, FPalNetworkContainerParameter> ContainerParamMap;
    
    UPROPERTY()
    TMap<FGuid, FPalNetworkItemOperationParameter> ItemOperationParamMap;
    
    UPROPERTY()
    TMap<FGuid, FPalNetworkParameter> OperationParamMap;
    
public:
    UPalNetworkItemComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(Reliable, Server)
    void RequestSwap_ToServer(const FGuid& RequestID, const FPalItemSlotId& SlotA, const FPalItemSlotId& SlotB);
    
    UFUNCTION(Reliable, Server)
    void RequestMoveToContainer_ToServer(const FGuid& RequestID, const FPalContainerId& ToContainerId, const TArray<FPalItemSlotIdAndNum>& Froms);
    
    UFUNCTION(Reliable, Server)
    void RequestMove_ToServer(const FGuid& RequestID, const FPalItemSlotId& To, const TArray<FPalItemSlotIdAndNum>& Froms);
    
    UFUNCTION(Reliable, Server)
    void RequestDrop_ToServer(const TArray<FPalItemSlotIdAndNum>& DropSlotAndNumArray, const FVector& DropLocation, bool IsAutoPickup);
    
    UFUNCTION(Reliable, Server)
    void RequestDispose_ToServer(const FGuid& RequestID, const FPalItemSlotIdAndNum& SlotInfo);
    
    UFUNCTION(Reliable, Server)
    void RequestChangeFilter_ToServer(const FPalContainerId& ContainerId, const FName FilterName, const bool bIsOn);
    
    UFUNCTION(Reliable, Server)
    void RequestChangeAllFilterUncheck_ToServer(const FPalContainerId& ContainerId);
    
    UFUNCTION(Reliable, Server)
    void RequestChangeAllFilterCheck_ToServer(const FPalContainerId& ContainerId);
    
};

