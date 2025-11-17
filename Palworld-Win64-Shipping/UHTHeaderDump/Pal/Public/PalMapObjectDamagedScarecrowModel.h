#pragma once
#include "CoreMinimal.h"
#include "PalDamageInfo.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectDamagedScarecrowModel.generated.h"

class UPalMapObjectModel;

UCLASS()
class UPalMapObjectDamagedScarecrowModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    float ProgressTimeStartAtDamaged;
    
public:
    UPalMapObjectDamagedScarecrowModel();

private:
    UFUNCTION()
    void OnDamage_ServerInternal(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, const int32 LastHp);
    
};

