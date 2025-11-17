#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "KawaiiPhysics_ExternalForce.h"
#include "KawaiiPhysics_ExternalForce_Gravity.generated.h"

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FKawaiiPhysics_ExternalForce_Gravity : public FKawaiiPhysics_ExternalForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve ForceRateByBoneLengthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCharacterGravityDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCharacterGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OverrideGravityDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseOverrideGravityDirection;
    
    FKawaiiPhysics_ExternalForce_Gravity();
};

