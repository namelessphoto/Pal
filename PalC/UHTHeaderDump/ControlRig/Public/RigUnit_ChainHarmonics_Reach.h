#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigAnimEasingType.h"
#include "RigUnit_ChainHarmonics_Reach.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ChainHarmonics_Reach {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ReachTarget;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector ReachAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReachMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReachMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigAnimEasingType ReachEase;
    
    FRigUnit_ChainHarmonics_Reach();
};

