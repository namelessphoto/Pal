#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "CommonLocalPlayer.generated.h"

UCLASS(NonTransient)
class COMMONGAME_API UCommonLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UCommonLocalPlayer();

};

