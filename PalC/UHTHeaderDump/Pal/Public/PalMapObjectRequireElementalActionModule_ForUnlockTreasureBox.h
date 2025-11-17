#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectRequireElementalActionModule.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectRequireElementalActionModule_ForUnlockTreasureBox.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS()
class PAL_API UPalMapObjectRequireElementalActionModule_ForUnlockTreasureBox : public UPalMapObjectRequireElementalActionModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnChangeLockedDelegate OnChangeLockedDelegate;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bLocked;
    
    UPROPERTY()
    TSubclassOf<UPalUserWidgetOverlayUI> SalvageGameUIClass;
    
public:
    UPalMapObjectRequireElementalActionModule_ForUnlockTreasureBox();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

