#pragma once
#include "CoreMinimal.h"
#include "PalGameModeBase.h"
#include "PalGameModeLogin.generated.h"

UCLASS(NonTransient)
class PAL_API APalGameModeLogin : public APalGameModeBase {
    GENERATED_BODY()
public:
    APalGameModeLogin(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnComplete(bool bCanPlayMulti);
    
    UFUNCTION()
    void OnCloseEalryAccess(bool _);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GoToTitle();
    
};

