#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalStaticItemIdAndNum.h"
#include "PalStatusBase.h"
#include "PalStatusCollectItem.generated.h"

class UPalPlayerInventoryData;

UCLASS()
class PAL_API UPalStatusCollectItem : public UPalStatusBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FPalStaticItemIdAndNum CollectItemInfo;
    
public:
    UPalStatusCollectItem();

    UFUNCTION(BlueprintCallable)
    void TickStatus_Implementation(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectItemInfo(const FPalStaticItemIdAndNum& ItemIDAndNum);
    
    UFUNCTION(BlueprintCallable)
    void OnEndStatus_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void OnBreakStatus_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginStatus_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginSomeStatus_Implementation();
    
private:
    UFUNCTION()
    bool IsThrown() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsServer() const;
    
private:
    UFUNCTION()
    bool IsRestrictedByWorkerEvent() const;
    
    UFUNCTION()
    bool IsRestrictedByWork() const;
    
    UFUNCTION()
    bool IsLifted() const;
    
    UFUNCTION()
    bool IsHealth() const;
    
    UFUNCTION()
    bool IsBattleMode() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UPalPlayerInventoryData* GetOwnerPlayerInventoryData() const;
    
public:
    UFUNCTION(BlueprintPure)
    FPalStaticItemIdAndNum GetCollectItemInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void DropItem(FName ItemId, int32 DropNum, FVector SpawnLocation, FVector ReleaseDirection);
    
    UFUNCTION(BlueprintPure)
    bool CanSpawnItem() const;
    
};

