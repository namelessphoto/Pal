#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
#include "RigUnit_ToRigSpace_Location.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ToRigSpace_Location : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Global;
    
    FRigUnit_ToRigSpace_Location();
};

