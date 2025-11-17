#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "KawaiiPhysics_ExternalForce.h"
#include "KawaiiPhysics_ExternalForce_Basic.generated.h"

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FKawaiiPhysics_ExternalForce_Basic : public FKawaiiPhysics_ExternalForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ForceDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve ForceRateByBoneLengthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Interval;
    
private:
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    float PrevTime;
    
public:
    FKawaiiPhysics_ExternalForce_Basic();
};

