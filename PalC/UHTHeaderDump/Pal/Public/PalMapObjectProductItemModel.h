#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalWorkProgressWorkSpeedInterface.h"
#include "PalWorkProgressWorkableCheckInterface.h"
#include "PalMapObjectProductItemModel.generated.h"

class UPalItemContainer;
class UPalMapObjectConcreteModelExtraFunctionBase;
class UPalMapObjectEnergyModule;
class UPalMapObjectProductItemModel;
class UPalWorkBase;

UCLASS()
class UPalMapObjectProductItemModel : public UPalMapObjectConcreteModelBase, public IPalWorkProgressWorkableCheckInterface, public IPalWorkProgressWorkSpeedInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDelegate, UPalMapObjectProductItemModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnFinishProductOneLoopDelegate;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalMapObjectConcreteModelExtraFunctionBase* ExtraFunction;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bIsWorkable;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName ProductItemId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float WorkSpeedAdditionalRate;
    
public:
    UPalMapObjectProductItemModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void ReceivePickupItemResult_Client(const FPalNetArchive& Archive);
    
    UFUNCTION()
    void PickupItem_ServerInternal(const int32 PlayerId);
    
    UFUNCTION()
    void OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule);
    
    UFUNCTION()
    void OnUpdateContainerContent(UPalItemContainer* Container);
    
    UFUNCTION()
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
public:
    UFUNCTION(BlueprintPure)
    FName GetProductItemId() const;
    
    UFUNCTION(BlueprintPure)
    UPalItemContainer* GetItemContainer() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float CalcRequiredAmount(const float BaseRequiredAmount) const;
    

    // Fix for true pure virtual functions not being implemented
};

