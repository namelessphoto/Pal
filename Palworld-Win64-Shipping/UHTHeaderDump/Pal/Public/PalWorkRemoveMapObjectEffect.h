#pragma once
#include "CoreMinimal.h"
#include "EPalStatusID.h"
#include "PalWorkBase.h"
#include "PalWorkRemoveMapObjectEffect.generated.h"

UCLASS()
class PAL_API UPalWorkRemoveMapObjectEffect : public UPalWorkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalStatusID TargetEffectType;
    
public:
    UPalWorkRemoveMapObjectEffect();

};

