#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicsVolume -FallbackName=PhysicsVolume
#include "WaterBodyExclusionVolume.generated.h"

class AWaterBody;

UCLASS()
class WATER_API AWaterBodyExclusionVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bExcludeAllOverlappingWaterBodies;
    
    UPROPERTY(EditInstanceOnly)
    TArray<AWaterBody*> WaterBodiesToExclude;
    
    AWaterBodyExclusionVolume(const FObjectInitializer& ObjectInitializer);

};

