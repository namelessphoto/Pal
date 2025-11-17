#pragma once
#include "CoreMinimal.h"
#include "OnPalSelectedDelegateDelegate.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_ArenaPalSelect.generated.h"

class UPalArenaSequencer;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_ArenaPalSelect : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalArenaSequencer* ArenaSequencer;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FOnPalSelectedDelegate OnPalSelected;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsSoloMode;
    
    UPalHUDDispatchParameter_ArenaPalSelect();

};

