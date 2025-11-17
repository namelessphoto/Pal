#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemId.h"
#include "PalDynamicItemInfo.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalWorldSubsystem.h"
#include "PalDynamicItemWorldSubsystem.generated.h"

class UPalDynamicItemDataBase;

UCLASS()
class PAL_API UPalDynamicItemWorldSubsystem : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalDynamicItemId, UPalDynamicItemDataBase*> DynamicItemDataMap_InServer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalDynamicItemId, FPalDynamicItemInfo> WeakDynamicItemDataMap_InClient;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalDynamicItemDataBase*> DynamicItemDataCache_InClient;
    
public:
    UPalDynamicItemWorldSubsystem();


    // Fix for true pure virtual functions not being implemented
};

