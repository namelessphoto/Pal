#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalLogType.h"
#include "PalBaseCampWorkerEventMasterData.h"
#include "PalDataTableRowName_BaseCampWorkerEventData.h"
#include "PalBaseCampWorkerEventBase.generated.h"

class APalCharacter;
class UNiagaraSystem;

UCLASS(Abstract, Blueprintable)
class UPalBaseCampWorkerEventBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_BaseCampWorkerEventData MasterDataId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalLogType LogType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBaseCampWorkerEventMasterData MasterData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UNiagaraSystem> OverrideSleepFX;
    
public:
    UPalBaseCampWorkerEventBase();

    UFUNCTION(BlueprintNativeEvent)
    bool IsTriggerEventBySanity(const float SanityValue) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsTriggerEventByCharacter(const APalCharacter* Character) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FString Debug_CreateTextTriggerEventSanity();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    FText CreateNotifyMessageText(const FText& LocalizedFormatText, APalCharacter* Character);
    
};

