#pragma once
#include "CoreMinimal.h"
#include "EPalGenderType.h"
#include "PalFishingCutsceneCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingCutsceneCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FString NickName;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FName> PassiveSkillIds;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EPalGenderType GenderType;
    
    PAL_API FPalFishingCutsceneCharacterInfo();
};

