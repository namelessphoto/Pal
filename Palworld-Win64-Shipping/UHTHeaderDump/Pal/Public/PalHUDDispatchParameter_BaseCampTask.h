#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_BaseCampTask.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_BaseCampTask : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGuid TargetBaseCampID;
    
    UPalHUDDispatchParameter_BaseCampTask();

};

