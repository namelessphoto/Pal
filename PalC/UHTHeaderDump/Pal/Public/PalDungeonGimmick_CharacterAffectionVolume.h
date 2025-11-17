#pragma once
#include "CoreMinimal.h"
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmick_CharacterAffectionVolume.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalDungeonGimmick_CharacterAffectionVolumeEffectBase;

UCLASS()
class PAL_API APalDungeonGimmick_CharacterAffectionVolume : public APalDungeonLevelGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<TScriptInterface<IPalInteractiveObjectComponentInterface>> InteractComps;
    
    UPROPERTY(EditAnywhere, Instanced)
    UPalDungeonGimmick_CharacterAffectionVolumeEffectBase* EffectToCharacterPlayer;
    
    UPROPERTY(EditAnywhere, Instanced)
    UPalDungeonGimmick_CharacterAffectionVolumeEffectBase* EffectToCharacterPlayerOtomo;
    
    UPROPERTY(EditAnywhere, Instanced)
    UPalDungeonGimmick_CharacterAffectionVolumeEffectBase* EffectToCharacterDefault;
    
    UPROPERTY(EditAnywhere, Instanced)
    UPalDungeonGimmick_CharacterAffectionVolumeEffectBase* EffectToMapObject;
    
public:
    APalDungeonGimmick_CharacterAffectionVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
};

