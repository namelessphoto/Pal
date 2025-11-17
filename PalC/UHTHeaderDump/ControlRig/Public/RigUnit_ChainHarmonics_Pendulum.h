#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigAnimEasingType.h"
#include "RigUnit_ChainHarmonics_Pendulum.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ChainHarmonics_Pendulum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PendulumStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PendulumGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PendulumBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PendulumDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PendulumMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PendulumMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigAnimEasingType PendulumEase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector UnwindAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UnwindMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UnwindMaximum;
    
    FRigUnit_ChainHarmonics_Pendulum();
};

