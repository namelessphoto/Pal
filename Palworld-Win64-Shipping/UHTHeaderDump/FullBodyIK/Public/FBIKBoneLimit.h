#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EFBIKBoneLimitType.h"
#include "FBIKBoneLimit.generated.h"

USTRUCT()
struct FFBIKBoneLimit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFBIKBoneLimitType LimitType_X;
    
    UPROPERTY(EditAnywhere)
    EFBIKBoneLimitType LimitType_Y;
    
    UPROPERTY(EditAnywhere)
    EFBIKBoneLimitType LimitType_Z;
    
    UPROPERTY(EditAnywhere)
    FVector Limit;
    
    FULLBODYIK_API FFBIKBoneLimit();
};

