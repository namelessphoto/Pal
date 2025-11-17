#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalOneDayTimeType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalTimerHandle.h"
#include "PalWorldSubsystem.h"
#include "PalTimeManager.generated.h"

class UObject;
class UPalTimeManager;

UCLASS(Blueprintable)
class PAL_API UPalTimeManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FTimerEventDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNightStartDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNightSkipDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNightEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeSleepingPlayerNumDelegate, UPalTimeManager*, Manager);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangeMinutesDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangeHoursDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnNightStartDelegate OnNightStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnNightEndDelegate OnNightEndDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnNightSkipDelegate OnPreNightSkipDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnNightSkipDelegate OnNightSkipDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeHoursDelegate OnChangeHoursDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeMinutesDelegate OnChangeMinutesDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeSleepingPlayerNumDelegate OnChangeSleepingPlayerNumDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 SleepingPlayerNum;
    
private:
    UPROPERTY()
    FTimerHandle NightSkipTimerHandle;
    
public:
    UPalTimeManager();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Tick_BP(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGameTime_FixDay(const int32 NextHour);
    
    UFUNCTION(BlueprintPure)
    static FString PalTimeSecondsToString(float InSeconds);
    
    UFUNCTION(BlueprintPure)
    int32 GetSleepingPlayerCount(const bool bForceLocalPlayerSleep) const;
    
    UFUNCTION(BlueprintPure)
    FString GetDebugTimeString() const;
    
    UFUNCTION(BlueprintPure)
    float GetDayTimePassRate();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentPalWorldTime_TotalDay() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentPalWorldTime_Second() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentPalWorldTime_Minute() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentPalWorldTime_Hour() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentPalWorldTime_Day() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentPalWorldHoursFloat();
    
    UFUNCTION(BlueprintPure)
    EPalOneDayTimeType GetCurrentDayTimeType() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearTimer(const UObject* WorldContextObject, const FPalTimerHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    FPalTimerHandle AddTimerEventBySpan(const UPalTimeManager::FTimerEventDelegate& Delegate, const float Hours, const float Minutes, const float Seconds);
    

    // Fix for true pure virtual functions not being implemented
};

