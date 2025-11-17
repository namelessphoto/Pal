#pragma once
#include "CoreMinimal.h"
#include "PalDamageInfo.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectDamageWithLastDelegateDelegate.h"
#include "PalMapObjectStatusObserverModule.generated.h"

class UPalMapObjectModel;

UCLASS()
class UPalMapObjectStatusObserverModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPalMapObjectDamageWithLastDelegate OnDamageInServerDelegate;
    
    UPalMapObjectStatusObserverModule();

private:
    UFUNCTION()
    void OnDamage_ServerInternal(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, const int32 LastHp);
    
};

