#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MultiFABRIK_EndEffector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MultiFABRIK_EndEffector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    FRigUnit_MultiFABRIK_EndEffector();
};

