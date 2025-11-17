#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "PalUserWidgetWorldHUD.h"
#include "PalBossEntryWaitInfoHUD.generated.h"

class APalBossTower;

UCLASS(EditInlineNew)
class PAL_API UPalBossEntryWaitInfoHUD : public UPalUserWidgetWorldHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool EnableCountDown;
    
    UPROPERTY(BlueprintReadOnly)
    APalBossTower* BossTower;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime TimeLimitDate;
    
    UPalBossEntryWaitInfoHUD();

protected:
    UFUNCTION()
    void UpdateWaitInfo(bool bIsCountDown, FDateTime TimeLimit);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCountDown();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseHUD();
    
};

