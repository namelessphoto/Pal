#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectItemStorageModel.generated.h"

class UPalItemContainer;

UCLASS()
class UPalMapObjectItemStorageModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bAutoDestroyIfEmpty;
    
public:
    UPalMapObjectItemStorageModel();

private:
    UFUNCTION()
    void OnUpdateContainerContentInServer(UPalItemContainer* Container);
    
};

