#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectTorchModel.generated.h"

class UPalWorkBootUp;

UCLASS()
class PAL_API UPalMapObjectTorchModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 IgnitionMinutes;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGameDateTime ExtinctionDateTime;
    
public:
    UPalMapObjectTorchModel();

private:
    UFUNCTION()
    void RequestTriggerIgnition_ToServer(const int32 RequestPlayerId);
    
    UFUNCTION()
    void OnWorkBootUp_ServerInternal(UPalWorkBootUp* Work);
    
};

