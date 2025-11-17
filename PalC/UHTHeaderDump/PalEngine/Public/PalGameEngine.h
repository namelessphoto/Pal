#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameEngine -FallbackName=GameEngine
#include "PalGameEngine.generated.h"

UCLASS(NonTransient)
class PALENGINE_API UPalGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UPalGameEngine();

};

