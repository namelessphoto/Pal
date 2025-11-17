#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeVectorCurve -FallbackName=RuntimeVectorCurve
#include "EExternalForceCurveEvaluateType.h"
#include "KawaiiPhysics_ExternalForce.h"
#include "KawaiiPhysics_ExternalForce_Curve.generated.h"

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FKawaiiPhysics_ExternalForce_Curve : public FKawaiiPhysics_ExternalForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve ForceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EExternalForceCurveEvaluateType CurveEvaluateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SubstepCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve ForceRateByBoneLengthRate;
    
private:
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    float PrevTime;
    
    UPROPERTY()
    float MaxCurveTime;
    
public:
    FKawaiiPhysics_ExternalForce_Curve();
};

