#pragma once
#include "CoreMinimal.h"
#include "PalEggRankInfo.h"
#include "PalEggSaveInfo.h"
#include "PalFastPalEggRepInfoArray.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalWorkProgressWorkSpeedInterface.h"
#include "PalWorkProgressWorkableCheckInterface.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectHatchingEggModelBase.generated.h"

class UPalBaseCampModulePassiveEffect;
class UPalIndividualCharacterHandle;
class UPalItemContainer;
class UPalMapObjectEnergyModule;
class UPalMapObjectHatchingEggModelBase;
class UPalUserWidgetOverlayUI;
class UPalWorkBase;
class UPalWorkProgress;

UCLASS()
class PAL_API UPalMapObjectHatchingEggModelBase : public UPalMapObjectConcreteModelBase, public IPalWorkProgressWorkableCheckInterface, public IPalWorkProgressWorkSpeedInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateWorkableDelegate, bool, Workable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdatePalEggArrayDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateHatchedCharacterDelegate, UPalMapObjectHatchingEggModelBase*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHatchFailedDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FUpdatePalEggArrayDelegate OnUpdatePalEggArrayDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateHatchedCharacterDelegate OnHatchedCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateWorkableDelegate OnUpdateWorkableDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnHatchFailedDelegate OnHatchFailedDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRepEggInfoArray)
    FPalFastPalEggRepInfoArray RepInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bWorkable;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float DefaultConsumeEnergySpeed;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float DefaultAutoWorkAmountBySec;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalEggSaveInfo> TmpSaveInfoArray;
    
public:
    UPalMapObjectHatchingEggModelBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateWorkAmountBySec(const float NewWorkAmountBySec);
    
    UFUNCTION(BlueprintCallable)
    void RequestObtainSingleHatchedCharacter(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestObtainAllHatchedCharacter();
    
private:
    UFUNCTION()
    void OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule);
    
    UFUNCTION()
    void OnUpdateContainerContentInServer(UPalItemContainer* Container);
    
    UFUNCTION()
    void OnRepEggInfoArray();
    
    UFUNCTION()
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnChangeBaseCampPassive(UPalBaseCampModulePassiveEffect* PassiveEffectModule);
    
    UFUNCTION()
    void OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle);
    
    UFUNCTION()
    void ObtainHatchedCharacter_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION()
    void NotifyHatchFailed_NoEmptySlot_ClientInternal();
    
    UFUNCTION()
    void NotifyHatchComplete_ClientInternal();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWorkable() const;
    
    UFUNCTION(BlueprintPure)
    UPalWorkProgress* GetWorkProgress(const int32 SlotIndex);
    
    UFUNCTION(BlueprintPure)
    bool GetPalEggRankInfo(const int32 SlotIndex, FPalEggRankInfo& OutPalEggRankInfo);
    
    UFUNCTION(BlueprintPure)
    int32 GetItemSlotNum() const;
    

    // Fix for true pure virtual functions not being implemented
};

