#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampWorkerTaskBase.h"
#include "PalBaseCampWorkerTask_IgnitionTorchAtNight.generated.h"

class UPalMapObjectConcreteModelBase;

UCLASS()
class PAL_API UPalBaseCampWorkerTask_IgnitionTorchAtNight : public UPalBaseCampWorkerTaskBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FGuid> TorchInstanceIds;
    
public:
    UPalBaseCampWorkerTask_IgnitionTorchAtNight();

private:
    UFUNCTION()
    void OnNotAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION()
    void OnAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

