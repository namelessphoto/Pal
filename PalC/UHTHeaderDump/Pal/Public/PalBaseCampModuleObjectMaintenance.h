#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalBaseCampModuleObjectMaintenance.generated.h"

class UPalBaseCampModuleObjectMaintenance_WayBase;
class UPalMapObjectModel;
class UPalMapObjectModelEffectBase;

UCLASS()
class PAL_API UPalBaseCampModuleObjectMaintenance : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UPalBaseCampModuleObjectMaintenance_WayBase*> MaintenanceWayDOs;
    
public:
    UPalBaseCampModuleObjectMaintenance();

private:
    UFUNCTION()
    void OnRegisteredMapObject_ServerInternal(UPalMapObjectModel* Model);
    
    UFUNCTION()
    void OnGrantedEffectToMapObject_ServerInternal(UPalMapObjectModel* Model, UPalMapObjectModelEffectBase* Effect);
    
    UFUNCTION()
    void OnDisposeMapObject_ServerInternal(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options);
    
};

