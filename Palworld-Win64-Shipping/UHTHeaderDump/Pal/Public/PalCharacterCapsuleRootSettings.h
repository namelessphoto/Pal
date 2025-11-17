#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCharacterCapsuleRootSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterCapsuleRootSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    float MaxCapsuleRadius;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float MaxCapsuleHeight;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector MeshOffset;
    
    PAL_API FPalCharacterCapsuleRootSettings();
};

