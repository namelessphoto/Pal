#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectLockPickingModule.generated.h"

class UPalHUDDispatchParameterBase;

UCLASS()
class PAL_API UPalMapObjectLockPickingModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndPickingGame, bool, IsSuccess);
    
    UPROPERTY(BlueprintAssignable)
    FEndPickingGame OnEndPickingGameDelegate;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bAnyonePicking;
    
public:
    UPalMapObjectLockPickingModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnEndPickingGame_Client(UPalHUDDispatchParameterBase* Param);
    
};

