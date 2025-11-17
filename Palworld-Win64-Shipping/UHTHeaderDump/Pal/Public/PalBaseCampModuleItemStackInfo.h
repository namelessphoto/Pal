#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalFastBaseCampItemStackRepInfoArray.h"
#include "PalMapObjectPasswordLockPlayerInfo.h"
#include "PalBaseCampModuleItemStackInfo.generated.h"

class UPalBaseCampModuleItemStackInfo;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectItemChestModel;
class UPalMapObjectItemContainerModule;
class UPalMapObjectPasswordLockModule;

UCLASS()
class PAL_API UPalBaseCampModuleItemStackInfo : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalBaseCampModuleItemStackInfo*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdateItemStackRepInfoDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_ItemStackRepInfoArray)
    FPalFastBaseCampItemStackRepInfoArray ItemStackRepInfoArray;
    
public:
    UPalBaseCampModuleItemStackInfo();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdatePrivateLockPlayerUId_ServerInternal(UPalMapObjectItemChestModel* ItemChestModel);
    
    UFUNCTION()
    void OnUpdatePasswordLock_ServerInternal(UPalMapObjectPasswordLockModule* PasswordLockModule, const FPalMapObjectPasswordLockPlayerInfo& NewPlayerInfo);
    
    UFUNCTION()
    void OnUpdateItemContainer(UPalMapObjectItemContainerModule* ItemContainerModule);
    
protected:
    UFUNCTION()
    void OnRep_ItemStackRepInfoArray();
    
private:
    UFUNCTION()
    void OnNotAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION()
    void OnAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

