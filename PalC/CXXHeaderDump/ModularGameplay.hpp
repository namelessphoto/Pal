#ifndef UE4SS_SDK_ModularGameplay_HPP
#define UE4SS_SDK_ModularGameplay_HPP

struct FActorInitStateChangedParams
{
    class AActor* OwningActor;
    FName FeatureName;
    class UObject* Implementer;
    FGameplayTag FeatureState;

};

class IGameFrameworkInitStateInterface : public IInterface
{

    bool UnregisterInitStateDelegate(FUnregisterInitStateDelegateDelegate Delegate);
    bool RegisterAndCallForInitStateChange(FGameplayTag RequiredState, FRegisterAndCallForInitStateChangeDelegate Delegate, bool bCallImmediately);
    bool HasReachedInitState(FGameplayTag DesiredState);
    FGameplayTag GetInitState();
    FName GetFeatureName();
};

class UControllerComponent : public UGameFrameworkComponent
{
};

class UGameFrameworkComponent : public UActorComponent
{
};

class UGameFrameworkComponentManager : public UGameInstanceSubsystem
{

    bool UnregisterClassInitStateDelegate(TSoftClassPtr<AActor> actorClass, FUnregisterClassInitStateDelegateDelegateToRemove DelegateToRemove);
    bool UnregisterActorInitStateDelegate(class AActor* Actor, FUnregisterActorInitStateDelegateDelegateToRemove DelegateToRemove);
    void SendExtensionEvent(class AActor* Receiver, FName EventName, bool bOnlyInGameWorlds);
    void RemoveReceiver(class AActor* Receiver);
    bool RegisterAndCallForClassInitState(TSoftClassPtr<AActor> actorClass, FName FeatureName, FGameplayTag RequiredState, FRegisterAndCallForClassInitStateDelegate Delegate, bool bCallImmediately);
    bool RegisterAndCallForActorInitState(class AActor* Actor, FName FeatureName, FGameplayTag RequiredState, FRegisterAndCallForActorInitStateDelegate Delegate, bool bCallImmediately);
    void AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds);
};

class UGameStateComponent : public UGameFrameworkComponent
{
};

class UPawnComponent : public UGameFrameworkComponent
{
};

class UPlayerStateComponent : public UGameFrameworkComponent
{
};

#endif
