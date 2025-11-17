#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "KawaiiPhysics_ExternalForce.h"
#include "KawaiiPhysics_ExternalForce_Wind.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FKawaiiPhysics_ExternalForce_Wind : public FKawaiiPhysics_ExternalForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve ForceRateByBoneLengthRate;
    
private:
    UPROPERTY()
    UWorld* World;
    
public:
    FKawaiiPhysics_ExternalForce_Wind();
};

