#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalItemOperationResult.h"
#include "PalBaseCampModuleTransportItemDepotInterface.h"
#include "PalInstanceID.h"
#include "PalItemSlotIdAndNum.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectBreedFarmModel.generated.h"

class UPalWorkBase;

UCLASS()
class PAL_API UPalMapObjectBreedFarmModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampModuleTransportItemDepotInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBreedProgressChangedDelegate, float, CurrentProgress, float, MaxProgress);
    
    UPROPERTY(BlueprintAssignable)
    FOnBreedProgressChangedDelegate OnUpdateBreedProgress;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FGuid> SpawnedEggInstanceIds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 ExistPalEggMaxNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_UpdateBreedProgress)
    float BreedRequiredRealTime;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_UpdateBreedProgress)
    float BreedProgressTime;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalInstanceID> LastProceedWorkerIndividualIds;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FName> TargetBreedItemIds;
    
public:
    UPalMapObjectBreedFarmModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdateAssignedCharacter(UPalWorkBase* Work);
    
public:
    UFUNCTION()
    void OnRep_UpdateBreedProgress();
    
    UFUNCTION(BlueprintPure)
    void GetBreedProgress(float& NowProgress, float& MaxProgress);
    
    UFUNCTION(BlueprintPure)
    bool CanProceedBreeding() const;
    
    UFUNCTION(BlueprintPure)
    EPalItemOperationResult CanConsumeBreedItem(FPalItemSlotIdAndNum& ConsumableItem) const;
    

    // Fix for true pure virtual functions not being implemented
};

