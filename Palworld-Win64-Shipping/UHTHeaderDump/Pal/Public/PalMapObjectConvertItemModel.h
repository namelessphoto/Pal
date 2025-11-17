#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "EPalMapObjectConvertItemModelRequestResult.h"
#include "PalBaseCampModuleTransportItemRequirerInterface.h"
#include "PalInstanceID.h"
#include "PalItemRecipe.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalWorkProgressWorkableCheckInterface.h"
#include "PalMapObjectConvertItemModel.generated.h"

class UPalItemContainer;
class UPalItemSlot;
class UPalMapObjectConvertItemModel;
class UPalMapObjectEnergyModule;
class UPalWorkBase;

UCLASS()
class UPalMapObjectConvertItemModel : public UPalMapObjectConcreteModelBase, public IPalWorkProgressWorkableCheckInterface, public IPalBaseCampModuleTransportItemRequirerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSettingDelegate, UPalMapObjectConvertItemModel*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateRecipeDelegate, UPalMapObjectConvertItemModel*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecieveUpdateRecipeRequestResultDelegate, EPalMapObjectConvertItemModelRequestResult, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFinishConvertDelegate, UPalMapObjectConvertItemModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateRecipeDelegate OnUpdateRecipeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FFinishConvertDelegate OnFinishConvertDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FRecieveUpdateRecipeRequestResultDelegate OnRecieveUpdateRecipeRequestResultDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSettingDelegate OnUpdateSettingDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentRecipeId)
    FName CurrentRecipeId;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_RequestedProductNum)
    int32 RequestedProductNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_RemainProductNum)
    int32 RemainProductNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_IsWorkable)
    bool bIsWorkable;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FName> RecipeIds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float WorkSpeedAdditionalRate;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 CurrentRecipeRequestPlayerId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<EPalItemTypeA> TargetTypesA;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<EPalItemTypeB> TargetTypesB;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 TargetRankMax;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<EPalItemTypeA> MaterialTypesA;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<EPalItemTypeB> MaterialTypesB;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool IsPickUpInteractable;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bCanTransportOutProduct;
    
public:
    UPalMapObjectConvertItemModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void ReceivePickupProductResult_Client(const FPalNetArchive& Archive);
    
private:
    UFUNCTION()
    void ReceivedPickProductResult(UPalItemSlot* Slot);
    
protected:
    UFUNCTION()
    void PickupProduct_ServerInternal(const int32 RequestPlayerId);
    
private:
    UFUNCTION()
    void OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule);
    
    UFUNCTION()
    void OnUpdateContainerContentInServer(UPalItemContainer* Container);
    
    UFUNCTION()
    void OnStartWorkAnyone_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& WorkerIndividualId);
    
protected:
    UFUNCTION()
    void OnRep_RequestedProductNum();
    
    UFUNCTION()
    void OnRep_RemainProductNum();
    
    UFUNCTION()
    void OnRep_IsWorkable();
    
    UFUNCTION()
    void OnRep_CurrentRecipeId();
    
private:
    UFUNCTION()
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnEndWorkAnyone_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& WorkerIndividualId);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTransportToStorage() const;
    
    UFUNCTION(BlueprintPure)
    static bool IsProductNumInfinite(const int32 ProductNum);
    
    UFUNCTION(BlueprintPure)
    UPalItemSlot* GetSlotInjectableMaterial(const FName StaticItemId) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSlotIndexProductOut() const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetSlotIndexesMaterialInput() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainCreateNum() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetRecipes();
    
    UFUNCTION(BlueprintPure)
    UPalItemSlot* GetProductSlot() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentRecipeId() const;
    
    UFUNCTION(BlueprintPure)
    FPalItemRecipe GetCurrentRecipe() const;
    
private:
    UFUNCTION()
    void ChangeRecipe_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION()
    void Cancel_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintPure)
    float CalcRequiredAmount(const float BaseRequiredAmount) const;
    
private:
    UFUNCTION()
    void AddConvertItemResultLog(const FPalNetArchive& Archive);
    

    // Fix for true pure virtual functions not being implemented
};

