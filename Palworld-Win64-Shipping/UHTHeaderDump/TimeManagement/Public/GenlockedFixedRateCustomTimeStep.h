#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "GenlockedCustomTimeStep.h"
#include "GenlockedFixedRateCustomTimeStep.generated.h"

UCLASS(EditInlineNew)
class TIMEMANAGEMENT_API UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFrameRate FrameRate;
    
    UPROPERTY(EditAnywhere)
    bool bShouldBlock;
    
    UPROPERTY(EditAnywhere)
    bool bForceSingleFrameDeltaTime;
    
    UGenlockedFixedRateCustomTimeStep();

};

