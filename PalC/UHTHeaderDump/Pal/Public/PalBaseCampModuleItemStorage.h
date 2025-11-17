#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampItemContainerInfo.h"
#include "PalBaseCampItemExistsInfo.h"
#include "PalBaseCampModuleItemStorage.generated.h"

class IPalMapObjectItemContainerAccessInterface;
class UPalMapObjectItemContainerAccessInterface;
class UPalBaseCampModuleItemStorage;
class UPalItemContainer;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectItemContainerModule;

UCLASS()
class PAL_API UPalBaseCampModuleItemStorage : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMulticastReturnSelfAndUpdatedContainerDelegate, UPalBaseCampModuleItemStorage*, Self, UPalItemContainer*, UpdatedContainer);
    
    UPROPERTY(BlueprintAssignable)
    FMulticastReturnSelfAndUpdatedContainerDelegate OnUpdateAnyItemContainerDelegate;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FPalBaseCampItemContainerInfo> ContainerInfos;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalBaseCampItemContainerInfo GuildContainerInfo;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalBaseCampItemExistsInfo> RepairKitUsableItemExistsInfos;
    
public:
    UPalBaseCampModuleItemStorage();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdateItemContainerModule(UPalMapObjectItemContainerModule* ItemContainerModule);
    
    UFUNCTION()
    void OnUpdateItemContainer(UPalItemContainer* ItemContainer);
    
    UFUNCTION()
    void OnReadyItemContainerGuildChest(TScriptInterface<IPalMapObjectItemContainerAccessInterface> ItemContainerAccess);
    
    UFUNCTION()
    void OnNotAvailableConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION()
    void OnAvailableConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

