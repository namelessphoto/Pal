#pragma once
#include "CoreMinimal.h"
#include "FootIKSetting.generated.h"

USTRUCT(BlueprintType)
struct FFootIKSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsEnableIK;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName RayCastBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RayStartOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RayEndOffset;
    
    PAL_API FFootIKSetting();
};

