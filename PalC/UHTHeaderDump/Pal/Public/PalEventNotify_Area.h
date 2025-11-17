#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalEventNotifyBase.h"
#include "PalEventNotifyCharacterInvasionDelegateDelegate.h"
#include "PalEventNotify_Area.generated.h"

class AActor;
class APalTriggerAreaBase;
class UObject;
class UPalEventNotify_Area;

UCLASS(BlueprintType)
class PAL_API UPalEventNotify_Area : public UPalEventNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPalEventNotifyCharacterInvasionDelegate OnNotifyEventBeginInvasionInServer;
    
    UPROPERTY(BlueprintAssignable)
    FPalEventNotifyCharacterInvasionDelegate OnNotifyEventEndInvasionInServer;
    
    UPalEventNotify_Area();

private:
    UFUNCTION()
    void OnRegiterdArea_ServerInternal(APalTriggerAreaBase* TriggerBase);
    
    UFUNCTION()
    void OnEndAreaInvasion_ServerInternal(AActor* HitActor, const FGuid& AreaInstanceId);
    
    UFUNCTION()
    void OnBeginAreaInvasion_ServerInternal(AActor* HitActor, const FGuid& AreaInstanceId);
    
public:
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalEventNotify_Area* GetEventNotify_Area(const UObject* WorldContextObject);
    
};

