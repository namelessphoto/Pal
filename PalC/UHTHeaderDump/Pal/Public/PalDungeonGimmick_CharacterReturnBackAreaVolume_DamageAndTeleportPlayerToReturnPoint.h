#pragma once
#include "CoreMinimal.h"
#include "PalDungeonGimmick_CharacterReturnBackAreaVolumeBase.h"
#include "Templates/SubclassOf.h"
#include "PalDungeonGimmick_CharacterReturnBackAreaVolume_DamageAndTeleportPlayerToReturnPoint.generated.h"

class UPalAction_EntryReturnBackArea;

UCLASS(EditInlineNew)
class PAL_API UPalDungeonGimmick_CharacterReturnBackAreaVolume_DamageAndTeleportPlayerToReturnPoint : public UPalDungeonGimmick_CharacterReturnBackAreaVolumeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DamageRateByHpMax;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UPalAction_EntryReturnBackArea> InvokeActionClass;
    
public:
    UPalDungeonGimmick_CharacterReturnBackAreaVolume_DamageAndTeleportPlayerToReturnPoint();

};

