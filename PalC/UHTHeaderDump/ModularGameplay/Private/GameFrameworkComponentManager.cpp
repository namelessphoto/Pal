#include "GameFrameworkComponentManager.h"

UGameFrameworkComponentManager::UGameFrameworkComponentManager() {
}

bool UGameFrameworkComponentManager::UnregisterClassInitStateDelegate(TSoftClassPtr<AActor> actorClass, FActorInitStateChangedBPDelegate DelegateToRemove) {
    return false;
}

bool UGameFrameworkComponentManager::UnregisterActorInitStateDelegate(AActor* Actor, FActorInitStateChangedBPDelegate DelegateToRemove) {
    return false;
}

void UGameFrameworkComponentManager::SendExtensionEvent(AActor* Receiver, FName EventName, bool bOnlyInGameWorlds) {
}

void UGameFrameworkComponentManager::RemoveReceiver(AActor* Receiver) {
}

bool UGameFrameworkComponentManager::RegisterAndCallForClassInitState(TSoftClassPtr<AActor> actorClass, FName FeatureName, FGameplayTag RequiredState, FActorInitStateChangedBPDelegate Delegate, bool bCallImmediately) {
    return false;
}

bool UGameFrameworkComponentManager::RegisterAndCallForActorInitState(AActor* Actor, FName FeatureName, FGameplayTag RequiredState, FActorInitStateChangedBPDelegate Delegate, bool bCallImmediately) {
    return false;
}

void UGameFrameworkComponentManager::AddReceiver(AActor* Receiver, bool bAddOnlyInGameWorlds) {
}


