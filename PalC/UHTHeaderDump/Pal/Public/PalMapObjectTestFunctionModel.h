#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectTestFunctionModel.generated.h"

UCLASS()
class UPalMapObjectTestFunctionModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectTestFunctionModel();

private:
    UFUNCTION()
    void RequestCountUpSIngle_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void RequestCountUp_ServerInternal(const int32 RequestPlayerId, const int32 IncrementNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestCountUp(const int32 IncrementNum);
    
private:
    UFUNCTION()
    void OnRecieveCountUp(const int32 ReflectedCounter);
    
};

