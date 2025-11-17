#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCutsceneBindParameter.h"
#include "PalFishingCutsceneCharacterInfo.h"
#include "PalCutsceneFishingBindParameter.generated.h"

UCLASS(BlueprintType)
class UPalCutsceneFishingBindParameter : public UPalCutsceneBindParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector CameraTargetOffset;
    
    UPROPERTY(BlueprintReadWrite)
    float CameraTargetDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite)
    FPalFishingCutsceneCharacterInfo CharacterInfo;
    
    UPalCutsceneFishingBindParameter();

};

