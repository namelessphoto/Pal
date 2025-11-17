#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalContainerId.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalItemContainerBelongInfo.h"
#include "PalItemOperationInfo_Move.h"
#include "PalItemSlotId.h"
#include "PalWorldSubsystem.h"
#include "PalItemContainerManager.generated.h"

class UObject;
class UPalItemContainer;
class UPalItemSlot;

UCLASS(BlueprintType)
class PAL_API UPalItemContainerManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemOperationMoveDelegate, const TArray<FPalItemOperationInfo_Move>&, OperationInfoSet);
    
    UPROPERTY(BlueprintAssignable)
    FItemOperationMoveDelegate OnItemOperationMoveDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalContainerId, UPalItemContainer*> ItemContainerMap_InServer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalContainerId, FPalItemContainerBelongInfo> ItemContainerBelongInfo;
    
    UPROPERTY()
    TSet<FPalContainerId> LoadedContainerIDs;
    
public:
    UPalItemContainerManager();

    UFUNCTION(BlueprintPure)
    bool TryGetSlot(const FPalItemSlotId& SlotId, UPalItemSlot*& Slot) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetContainer(const FPalContainerId& ContainerId, UPalItemContainer*& Container) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGuid GetGroupIdByItemSlotId(const UObject* WorldContextObject, const FPalItemSlotId& SlotId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGuid GetGroupIdByItemContainerId(const UObject* WorldContextObject, const FPalContainerId& ContainerId);
    
    UFUNCTION(BlueprintPure)
    UPalItemContainer* GetContainer(const FPalContainerId& ContainerId) const;
    

    // Fix for true pure virtual functions not being implemented
};

