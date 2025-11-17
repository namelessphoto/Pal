#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EEulerRotationOrder -FallbackName=EEulerRotationOrder
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigPreferredEulerAngles.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigPreferredEulerAngles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EEulerRotationOrder RotationOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Current;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Initial;
    
    FRigPreferredEulerAngles();
};

