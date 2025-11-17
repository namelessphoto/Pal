#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalUILiftSlotModelBehaviourBase.h"
#include "PalUILiftSlotModelBehaviourPalStorageMenu.generated.h"

UCLASS()
class UPalUILiftSlotModelBehaviourPalStorageMenu : public UPalUILiftSlotModelBehaviourBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid BaseCampId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid PushedOwnerMapObjectInstanceId;
    
public:
    UPalUILiftSlotModelBehaviourPalStorageMenu();

};

