#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TargetChainIKSettings.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FTargetChainIKSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendToSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BlendToSourceWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector StaticOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector StaticLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator StaticRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Extension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAffectedByIKWarping;
    
    FTargetChainIKSettings();
};

