#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalArenaPlayerIndex.h"
#include "PalArenaPreBattleCutsceneEvent.generated.h"

UCLASS()
class PAL_API APalArenaPreBattleCutsceneEvent : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraTarget, EPalArenaPlayerIndex, PlayerIndex);
    
    UPROPERTY(BlueprintAssignable)
    FOnCameraTarget OnCameraTargetDelegate;
    
    APalArenaPreBattleCutsceneEvent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnCameraTarget(EPalArenaPlayerIndex PlayerIndex);
    
};

