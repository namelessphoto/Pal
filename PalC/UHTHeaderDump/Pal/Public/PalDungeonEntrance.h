#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalStageInstanceId.h"
#include "PalDungeonEntrance.generated.h"

class APalDungeonEntrance;
class UPalDungeonInstanceModel;
class UPalStageModelDungeon;

UCLASS()
class PAL_API APalDungeonEntrance : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, APalDungeonEntrance*, SelfEntrance);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMulticastDelegate OnRepStageModelDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_StageModel)
    UPalStageModelDungeon* StageModel;
    
public:
    APalDungeonEntrance(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    bool TryGetDungeonInstanceModel(UPalDungeonInstanceModel*& OutModel) const;
    
protected:
    UFUNCTION()
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
private:
    UFUNCTION()
    void OnResponseDialogEnterDungeon(const bool bResponse);
    
protected:
    UFUNCTION()
    void OnRep_StageModel();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    FTransform GetWarpPoint() const;
    
    UFUNCTION(BlueprintPure)
    UPalStageModelDungeon* GetStageModel() const;
    
    UFUNCTION(BlueprintPure)
    FPalStageInstanceId GetStageInstanceId() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetDungeonInstanceId() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FTransform GetDeadItemDropPoint() const;
    

    // Fix for true pure virtual functions not being implemented
};

