#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CancellableAsyncAction -FallbackName=CancellableAsyncAction
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "PushContentToLayerForPlayerAsyncDelegateDelegate.h"
#include "AsyncAction_PushContentToLayerForPlayer.generated.h"

class APlayerController;
class UAsyncAction_PushContentToLayerForPlayer;
class UCommonActivatableWidget;

UCLASS()
class COMMONGAME_API UAsyncAction_PushContentToLayerForPlayer : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPushContentToLayerForPlayerAsyncDelegate BeforePush;
    
    UPROPERTY(BlueprintAssignable)
    FPushContentToLayerForPlayerAsyncDelegate AfterPush;
    
    UAsyncAction_PushContentToLayerForPlayer();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAsyncAction_PushContentToLayerForPlayer* PushContentToLayerForPlayer(APlayerController* OwningPlayer, TSoftClassPtr<UCommonActivatableWidget> WidgetClass, FGameplayTag LayerName, bool bSuspendInputUntilComplete);
    
};

