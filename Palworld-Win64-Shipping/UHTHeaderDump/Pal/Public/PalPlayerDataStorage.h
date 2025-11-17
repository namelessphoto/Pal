#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalPlayerDataInventoryInfo.h"
#include "PalPlayerDataStorage.generated.h"

class UPalItemContainerMultiHelper;
class UPalPlayerDataPalStorage;

UCLASS(BlueprintType)
class UPalPlayerDataStorage : public UObject {
    GENERATED_BODY()
public:
    UPalPlayerDataStorage();

    UFUNCTION(BlueprintPure)
    UPalPlayerDataPalStorage* GetPalStorage() const;
    
    UFUNCTION(BlueprintPure)
    void GetInventoryInfo(FPalPlayerDataInventoryInfo& outInventoryInfo) const;
    
    UFUNCTION(BlueprintPure)
    UPalItemContainerMultiHelper* GetInventoryContainers();
    
};

