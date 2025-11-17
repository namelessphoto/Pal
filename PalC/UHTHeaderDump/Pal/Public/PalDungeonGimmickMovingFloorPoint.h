#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalDungeonGimmickMovingFloorPoint.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPalDungeonGimmickMovingFloorPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    float WaitTime;
    
    UPROPERTY(EditAnywhere)
    bool bPlayFXAtPoint;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* OverridePlayFXAtPoint;
    
    PAL_API FPalDungeonGimmickMovingFloorPoint();
};

