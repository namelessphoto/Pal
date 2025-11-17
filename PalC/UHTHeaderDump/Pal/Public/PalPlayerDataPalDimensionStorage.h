#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDimensionPalStorageSaveParameter.h"
#include "PalDimensionStoragePageReplicationData.h"
#include "PalPlayerDataPalDimensionStorage.generated.h"

class UPalDimensionLockerControl;

UCLASS(BlueprintType)
class PAL_API UPalPlayerDataPalDimensionStorage : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePageData, const TArray<FPalDimensionPalStorageSaveParameter>&, NewPageData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateCurrentPageNum, int32, NewPageNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSortedLocker);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTimeout);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateCurrentPageNum OnUpdateCurrentPageNum;
    
    UPROPERTY(BlueprintAssignable)
    FUpdatePageData OnUpdatePageData;
    
    UPROPERTY(BlueprintAssignable)
    FSortedLocker OnSortedLocker;
    
    UPROPERTY(BlueprintAssignable)
    FOnTimeout OnTimeoutDelegate;
    
private:
    UPROPERTY()
    FGuid OwnerPlayerUId;
    
    UPROPERTY(ReplicatedUsing=OnRep_CurrentPage)
    int32 CurrentPage;
    
    UPROPERTY()
    TWeakObjectPtr<UPalDimensionLockerControl> WeakLockerControl;
    
    UPROPERTY(ReplicatedUsing=OnRep_PageData)
    FPalDimensionStoragePageReplicationData PageReplicationData;
    
public:
    UPalPlayerDataPalDimensionStorage();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdatedLockerData(const TArray<int32>& UpdatedDataIndexArray);
    
    UFUNCTION()
    void OnUpdateCurrentControllingPage(const FGuid& PlayerUId, int32 NewPageNum);
    
    UFUNCTION()
    void OnTimeoutPlayer(const FGuid& TimeoutPlayerUId);
    
    UFUNCTION()
    void OnSortedLockerData();
    
protected:
    UFUNCTION()
    void OnRep_PageData();
    
    UFUNCTION()
    void OnRep_CurrentPage();
    
public:
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetDimensionStoragePageNum(const UObject* WorldContextObject);
    
};

