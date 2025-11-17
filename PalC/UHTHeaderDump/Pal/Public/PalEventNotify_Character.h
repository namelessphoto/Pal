#pragma once
#include "CoreMinimal.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalEventNotifyBase.h"
#include "PalEventNotifyCharacterDamagedDelegateDelegate.h"
#include "PalEventNotifyCharacterDeadDelegateDelegate.h"
#include "PalEventNotify_Character.generated.h"

class UObject;
class UPalEventNotify_Character;
class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class PAL_API UPalEventNotify_Character : public UPalEventNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPalEventNotifyCharacterDamagedDelegate OnNotifyEventDamagedInServer;
    
    UPROPERTY(BlueprintAssignable)
    FPalEventNotifyCharacterDeadDelegate OnNotifyEventDeadInServer;
    
    UPalEventNotify_Character();

private:
    UFUNCTION()
    void OnCharacterSpawned_ServerInternal(UPalIndividualCharacterHandle* CharacterHandle);
    
    UFUNCTION()
    void OnCharacterDead_ServerInternal(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnCharacterDamaged_ServerInternal(FPalDamageResult DamageResult);
    
public:
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalEventNotify_Character* GetEventNotify_Character(const UObject* WorldContextObject);
    
};

