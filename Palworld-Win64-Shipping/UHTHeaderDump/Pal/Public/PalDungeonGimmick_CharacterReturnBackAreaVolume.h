#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalDungeonGimmick_CharacterAffectionVolume.h"
#include "PalDungeonGimmick_CharacterReturnBackAreaVolume.generated.h"

UCLASS()
class PAL_API APalDungeonGimmick_CharacterReturnBackAreaVolume : public APalDungeonGimmick_CharacterAffectionVolume {
    GENERATED_BODY()
public:
    APalDungeonGimmick_CharacterReturnBackAreaVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void GetReturnPointTransform(FTransform& OutTransform) const;
    
};

