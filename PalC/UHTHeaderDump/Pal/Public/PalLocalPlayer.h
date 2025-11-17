#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonGame -ObjectName=CommonLocalPlayer -FallbackName=CommonLocalPlayer
#include "PalLocalPlayer.generated.h"

UCLASS(NonTransient)
class UPalLocalPlayer : public UCommonLocalPlayer {
    GENERATED_BODY()
public:
    UPalLocalPlayer();

};

