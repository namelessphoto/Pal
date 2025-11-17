#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CRFourPointBezier.generated.h"

USTRUCT()
struct FCRFourPointBezier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector A;
    
    UPROPERTY(EditAnywhere)
    FVector B;
    
    UPROPERTY(EditAnywhere)
    FVector C;
    
    UPROPERTY(EditAnywhere)
    FVector D;
    
    CONTROLRIG_API FCRFourPointBezier();
};

