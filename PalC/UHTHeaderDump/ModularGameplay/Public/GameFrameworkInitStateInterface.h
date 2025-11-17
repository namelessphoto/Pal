#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ActorInitStateChangedBPDelegateDelegate.h"
#include "GameFrameworkInitStateInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UGameFrameworkInitStateInterface : public UInterface {
    GENERATED_BODY()
};

class IGameFrameworkInitStateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool UnregisterInitStateDelegate(FActorInitStateChangedBPDelegate Delegate) PURE_VIRTUAL(UnregisterInitStateDelegate, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool RegisterAndCallForInitStateChange(FGameplayTag RequiredState, FActorInitStateChangedBPDelegate Delegate, bool bCallImmediately) PURE_VIRTUAL(RegisterAndCallForInitStateChange, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasReachedInitState(FGameplayTag DesiredState) const PURE_VIRTUAL(HasReachedInitState, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTag GetInitState() const PURE_VIRTUAL(GetInitState, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FName GetFeatureName() const PURE_VIRTUAL(GetFeatureName, return NAME_None;);
    
};

