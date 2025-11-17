#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalAudioStateGroup.h"
#include "PalArenaStartParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaStartParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FQuat Rot;
    
    UPROPERTY()
    EPalAudioStateGroup BattleBGMStateGroup;
    
    PAL_API FPalArenaStartParameter();
};

