#pragma once
#include "CoreMinimal.h"
#include "PalEggRankInfo.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalWorkProgressWorkSpeedInterface.h"
#include "PalWorkProgressWorkableCheckInterface.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectHatchingEggModel.generated.h"

class UPalBaseCampModulePassiveEffect;
class UPalDynamicPalEggItemDataBase;
class UPalIndividualCharacterHandle;
class UPalItemContainer;
class UPalMapObjectEnergyModule;
class UPalMapObjectHatchingEggModel;
class UPalUserWidgetOverlayUI;
class UPalWorkBase;

UCLASS()
class PAL_API UPalMapObjectHatchingEggModel : public UPalMapObjectConcreteModelBase, public IPalWorkProgressWorkableCheckInterface, public IPalWorkProgressWorkSpeedInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateWorkableDelegate, bool, Workable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateHatchTemperatureDelegate, int32, Temperature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateHatchedCharacterDelegate, UPalMapObjectHatchingEggModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateHatchedCharacterDelegate OnUpdateHatchedCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateHatchedCharacterDelegate OnHatchedCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateHatchTemperatureDelegate OnUpdateHatchTemperaturDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateWorkableDelegate OnUpdateWorkableDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_HatchedCharacterSaveParameter)
    FPalIndividualCharacterSaveParameter HatchedCharacterSaveParameter;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bWorkable;
    
    UPROPERTY(Replicated, Transient)
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HatchTemperatureDiff)
    int32 CurrentPalEggTemperatureDiff;
    
    UPROPERTY(Replicated, Transient)
    UPalDynamicPalEggItemDataBase* HatchedPalEggData;
    
public:
    UPalMapObjectHatchingEggModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateWorkAmountBySec(const float NewWorkAmountBySec);
    
    UFUNCTION(BlueprintCallable)
    void SetTemperatureDiff(int32 TemperatureDiff);
    
private:
    UFUNCTION()
    void OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule);
    
    UFUNCTION()
    void OnUpdateContainerContentInServer(UPalItemContainer* Container);
    
protected:
    UFUNCTION()
    void OnRep_HatchTemperatureDiff();
    
    UFUNCTION()
    void OnRep_HatchedCharacterSaveParameter();
    
private:
    UFUNCTION()
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnChangeBaseCampPassive(UPalBaseCampModulePassiveEffect* PassiveEffectModule);
    
    UFUNCTION()
    void OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle);
    
    UFUNCTION()
    void ObtainHatchedCharacter_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWorkable() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTemperatureDiff();
    
    UFUNCTION(BlueprintPure)
    bool GetPalEggRankInfo(FPalEggRankInfo& OutPalEggRankInfo);
    

    // Fix for true pure virtual functions not being implemented
};

