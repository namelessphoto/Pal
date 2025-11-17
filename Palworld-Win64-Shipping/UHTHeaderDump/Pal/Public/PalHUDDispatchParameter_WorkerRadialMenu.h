#pragma once
#include "CoreMinimal.h"
#include "EPalWorkerRadialMenuResult.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_WorkerRadialMenu.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_WorkerRadialMenu : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalIndividualCharacterHandle* IndividualHandle;
    
    UPROPERTY(BlueprintReadWrite)
    EPalWorkerRadialMenuResult resultType;
    
    UPalHUDDispatchParameter_WorkerRadialMenu();

};

