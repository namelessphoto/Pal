#pragma once
#include "CoreMinimal.h"
#include "PalItemAndNum.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectTestItemDestroyedDropModel.generated.h"

class UPalMapObjectModel;

UCLASS()
class UPalMapObjectTestItemDestroyedDropModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FPalItemAndNum> DropItemInfos;
    
public:
    UPalMapObjectTestItemDestroyedDropModel();

private:
    UFUNCTION()
    void OnDestroy_ServerInternal(UPalMapObjectModel* Model);
    
};

