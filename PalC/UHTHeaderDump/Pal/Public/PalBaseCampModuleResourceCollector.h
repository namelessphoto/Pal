#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleResourceCollectWorkInfo.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalBaseCampModuleResourceCollector.generated.h"

class UPalFoliageInstance;
class UPalMapObjectModel;

UCLASS()
class UPalBaseCampModuleResourceCollector : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalBaseCampModuleResourceCollectWorkInfo> MapObjectWorkInfoMap;
    
public:
    UPalBaseCampModuleResourceCollector();

private:
    UFUNCTION()
    void OnRespawnFoliageInstance(UPalFoliageInstance* Instance);
    
    UFUNCTION()
    void OnRegisteredMapObjectModel(UPalMapObjectModel* Model);
    
    UFUNCTION()
    void OnRegisteredFoliageModel_ServerInternal(UPalFoliageInstance* Instance);
    
    UFUNCTION()
    void OnDestroyedMapObjectModel(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options);
    
    UFUNCTION()
    void OnDestroyedFoliageInstance(UPalFoliageInstance* Instance);
    
};

