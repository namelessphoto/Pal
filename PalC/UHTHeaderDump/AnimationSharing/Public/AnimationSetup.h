#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformBool -FallbackName=PerPlatformBool
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformInt -FallbackName=PerPlatformInt
#include "Templates/SubclassOf.h"
#include "AnimationSetup.generated.h"

class UAnimSequence;
class UAnimSharingStateInstance;

USTRUCT()
struct FAnimationSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* AnimSequence;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TSubclassOf<UAnimSharingStateInstance> AnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt NumRandomizedInstances;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformBool Enabled;
    
    ANIMATIONSHARING_API FAnimationSetup();
};

