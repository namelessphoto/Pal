#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "LoadingScreenManager.generated.h"

UCLASS(BlueprintType)
class COMMONLOADINGSCREEN_API ULoadingScreenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    ULoadingScreenManager();

    UFUNCTION(BlueprintPure)
    FString GetDebugReasonForShowingOrHidingLoadingScreen() const;
    
};

