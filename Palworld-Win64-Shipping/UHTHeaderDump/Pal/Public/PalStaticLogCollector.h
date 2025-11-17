#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStaticLogCollector.generated.h"

class UPalLogManager;
class UPalPlayerDataStorage;

UCLASS(Blueprintable)
class PAL_API UPalStaticLogCollector : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid overInventoryWeightId;
    
    UPROPERTY()
    UPalLogManager* targetLogManager;
    
public:
    UPalStaticLogCollector();

    UFUNCTION(BlueprintImplementableEvent)
    void RegisterLogCollectEvent_BP();
    
private:
    UFUNCTION()
    void OnReadyPlayerInventoryData(UPalPlayerDataStorage* PlayerDataStorage);
    
    UFUNCTION()
    void OnOverWeightInventory(float NowWeight);
    
    UFUNCTION()
    void OnFixedWeightInventory(float NowWeight);
    
    UFUNCTION()
    void OnEndedWorldAutoSave(bool IsSuccess);
    
};

