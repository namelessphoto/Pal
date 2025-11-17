#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalAction_SleepPlayerBed.generated.h"

UCLASS()
class UPalAction_SleepPlayerBed : public UPalActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGetupTriggerDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnGetupTriggerDelegate OnGetupTriggerDelegate;
    
    UPalAction_SleepPlayerBed();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestPlayerAllowSkipNight();
    
    UFUNCTION(BlueprintCallable)
    void RequestClearAllowSkipNightInOnlyServer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGetupPlayerBedFromModel();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsSleepLooping() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetupBroadcast();
    
};

