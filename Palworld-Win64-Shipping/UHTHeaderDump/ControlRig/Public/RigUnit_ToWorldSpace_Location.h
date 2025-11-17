#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
#include "RigUnit_ToWorldSpace_Location.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ToWorldSpace_Location : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadOnly)
    FVector World;
    
    FRigUnit_ToWorldSpace_Location();
};

