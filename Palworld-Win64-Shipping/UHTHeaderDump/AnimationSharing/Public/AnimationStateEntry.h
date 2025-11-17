#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformInt -FallbackName=PerPlatformInt
#include "AnimationSetup.h"
#include "AnimationStateEntry.generated.h"

USTRUCT()
struct FAnimationStateEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 State;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimationSetup> AnimationSetups;
    
    UPROPERTY(EditAnywhere)
    bool bOnDemand;
    
    UPROPERTY(EditAnywhere)
    bool bAdditive;
    
    UPROPERTY(EditAnywhere)
    float BlendTime;
    
    UPROPERTY(EditAnywhere)
    bool bReturnToPreviousState;
    
    UPROPERTY(EditAnywhere)
    bool bSetNextState;
    
    UPROPERTY(EditAnywhere)
    uint8 NextState;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt MaximumNumberOfConcurrentInstances;
    
    UPROPERTY(EditAnywhere)
    float WiggleTimePercentage;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bRequiresCurves;
    
    ANIMATIONSHARING_API FAnimationStateEntry();
};

