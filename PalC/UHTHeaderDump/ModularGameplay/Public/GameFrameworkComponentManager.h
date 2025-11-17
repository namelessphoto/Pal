#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ActorInitStateChangedBPDelegateDelegate.h"
#include "GameFrameworkComponentManager.generated.h"

class AActor;

UCLASS(BlueprintType)
class MODULARGAMEPLAY_API UGameFrameworkComponentManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameFrameworkComponentManager();

    UFUNCTION(BlueprintCallable)
    bool UnregisterClassInitStateDelegate(TSoftClassPtr<AActor> actorClass, FActorInitStateChangedBPDelegate DelegateToRemove);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterActorInitStateDelegate(AActor* Actor, FActorInitStateChangedBPDelegate DelegateToRemove);
    
    UFUNCTION(BlueprintCallable)
    void SendExtensionEvent(AActor* Receiver, FName EventName, bool bOnlyInGameWorlds);
    
    UFUNCTION(BlueprintCallable)
    void RemoveReceiver(AActor* Receiver);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterAndCallForClassInitState(TSoftClassPtr<AActor> actorClass, FName FeatureName, FGameplayTag RequiredState, FActorInitStateChangedBPDelegate Delegate, bool bCallImmediately);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterAndCallForActorInitState(AActor* Actor, FName FeatureName, FGameplayTag RequiredState, FActorInitStateChangedBPDelegate Delegate, bool bCallImmediately);
    
    UFUNCTION(BlueprintCallable)
    void AddReceiver(AActor* Receiver, bool bAddOnlyInGameWorlds);
    
};

