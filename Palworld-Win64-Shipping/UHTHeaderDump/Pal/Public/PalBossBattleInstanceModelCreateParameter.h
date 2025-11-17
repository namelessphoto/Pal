#pragma once
#include "CoreMinimal.h"
#include "PalBossBattleInstanceModelCreateParameter.generated.h"

class APalBossTower;
class APalCutsceneActor;
class UAkAudioEvent;
class UDataLayerAsset;

USTRUCT()
struct FPalBossBattleInstanceModelCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftClassPtr<APalCutsceneActor> IntroCutsceneActor;
    
    UPROPERTY()
    UDataLayerAsset* ReservedDataLayerAsset;
    
    UPROPERTY()
    TSoftObjectPtr<UAkAudioEvent> BGMAudioEvent;
    
    UPROPERTY()
    APalBossTower* BossTower;
    
    PAL_API FPalBossBattleInstanceModelCreateParameter();
};

