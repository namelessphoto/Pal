#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalSyncTeleportRequestParameter.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FPalSyncTeleportRequestParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UAkAudioEvent* SyncTeleportStartSE;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite)
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsFadeInSkip;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsPlaySyncTeleportStartSE;
    
    PAL_API FPalSyncTeleportRequestParameter();
};

