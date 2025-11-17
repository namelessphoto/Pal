#pragma once
#include "CoreMinimal.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalEventNotifySystem.generated.h"

class UPalEventNotifyBase;

UCLASS(BlueprintType)
class PAL_API UPalEventNotifySystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UPalEventNotifyBase>> EventNotifyClassArray;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<TSubclassOf<UPalEventNotifyBase>, UPalEventNotifyBase*> EventNotifyMap;
    
public:
    UPalEventNotifySystem();

    UFUNCTION(BlueprintPure)
    UPalEventNotifyBase* GetEventNotify(TSubclassOf<UPalEventNotifyBase> Class) const;
    
};

