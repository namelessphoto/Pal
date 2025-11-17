#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EPalBaseCampWorkerEventType.h"
#include "PalBaseCampSignificanceInfo.h"
#include "PalBuildObjectSpawnValidationCheckInterface.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalSystemInitializeInterface.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalBaseCampManager.generated.h"

class AController;
class UDataTable;
class UPalAIActionBaseCampDefenseBase;
class UPalBaseCampModel;
class UPalBaseCampWorkerEventBase;
class UPalMapObjectModel;
class UPalWorkBase;

UCLASS(BlueprintType, Config=Game)
class UPalBaseCampManager : public UPalWorldSubsystem, public IPalBuildObjectSpawnValidationCheckInterface, public IPalGameWorldDataSaveInterface, public IPalSystemInitializeInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnBaseCampIdDelegate, const FGuid, BaseCampId);
    
    UPROPERTY(BlueprintAssignable)
    FReturnBaseCampIdDelegate OnCreateBaseCampModelInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnBaseCampIdDelegate OnRemoveBaseCampModelInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnBaseCampIdDelegate OnPreRemoveBaseCampModelInServerDelegate;
    
protected:
    UPROPERTY(Config)
    FName WorkerEventClassDirectoryPath;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AController> BaseCampAIControllerClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WorkerCapacityNumDefault;
    
    UPROPERTY(EditDefaultsOnly)
    FString WorkableBoundShapeName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DisplayCapacityNum;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle WarningSanityValueTextId;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalBaseCampWorkerEventType, UPalBaseCampWorkerEventBase*> WorkerEventMap;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* WorkerEventMasterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* WorkerSickMasterDataTable;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 WorkerEventTriggerTickMaxCount;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UPalAIActionBaseCampDefenseBase>> DefenseAIActionArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalBaseCampSignificanceInfo> BaseCampSignificanceInfoList;
    
    UPROPERTY(EditDefaultsOnly)
    float UpdateIntervalSquaredDistanceFromPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    float RestoreIgnoredWorkDistanceFromPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    float ClearUnreachableDistanceFromPlayer;
    
    UPROPERTY(EditDefaultsOnly, Transient)
    FTransform SpawnPointInBaseCampPointSubLocalTransform;
    
    UPROPERTY(Config)
    int32 BaseCampTickInvokeMaxNumInOneTick;
    
public:
    UPalBaseCampManager();

    UFUNCTION(BlueprintPure)
    bool TryGetModel(const FGuid& BaseCampId, UPalBaseCampModel*& OutModel) const;
    
    UFUNCTION(BlueprintCallable)
    void RequestDismantalDistanceBaseCamp(const FGuid& InstanceId);
    
private:
    UFUNCTION()
    void OnUpdateLocationWork_ServerInternal(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnUnregisteredWork_ServerInternal(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnRegisteredNewWork_ServerInternal(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnCreateMapObjectModelInServer(UPalMapObjectModel* CreatedModel, const FVector& Location);
    
public:
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetNearestBaseCamp(const FVector& Location) const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetInRangedBaseCamp(const FVector& Location, const float Margin) const;
    
    UFUNCTION(BlueprintPure)
    void GetBaseCampIds(TArray<FGuid>& OutIds) const;
    

    // Fix for true pure virtual functions not being implemented
};

