#pragma once
#include "CoreMinimal.h"
#include "EPalBossBattleDifficulty.h"
#include "PalBossBattleDifficultyParameter.h"
#include "PalBossBattleStaticInfo.generated.h"

class APalCutsceneActor;
class UAkAudioEvent;
class UDataLayerAsset;

USTRUCT(BlueprintType)
struct FPalBossBattleStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<APalCutsceneActor> IntroCutscene;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalBossBattleDifficulty, FPalBossBattleDifficultyParameter> DifficultyParameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataLayerAsset* DataLayerAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAkAudioEvent> BGMAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString AchievementId;
    
    PAL_API FPalBossBattleStaticInfo();
};

