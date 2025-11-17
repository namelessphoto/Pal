#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalFoliagePresetType.h"
#include "PalCellCoord.h"
#include "PalFoliageInstanceId.h"
#include "PalMapObjectFoliageModel.generated.h"

class UPalFoliageInstance;
class UPalMapObjectFoliageModel;

UCLASS()
class UPalMapObjectFoliageModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectFoliageModel*, Self);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInstanceDelegate, UPalFoliageInstance*, Instance);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInstanceDamageDelegate, UPalFoliageInstance*, Instance, const int32, DamageValue);
    
    UPROPERTY()
    FInstanceDelegate OnRespawn;
    
    UPROPERTY()
    FInstanceDamageDelegate OnDamage;
    
    UPROPERTY()
    FInstanceDelegate OnDestroy;
    
    UPROPERTY()
    FReturnSelfDelegate OnUpdatedRequiredTickInServer;
    
    UPROPERTY()
    FReturnSelfDelegate OnDisposeModelDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName ModelId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalFoliageInstanceId, UPalFoliageInstance*> InstanceMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalCellCoord CellCoord;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalFoliagePresetType FoliagePresetType;
    
public:
    UPalMapObjectFoliageModel();

private:
    UFUNCTION()
    void RespawnInstance(UPalFoliageInstance* Instance);
    
    UFUNCTION()
    void OnDestroyInstance(UPalFoliageInstance* Instance);
    
};

