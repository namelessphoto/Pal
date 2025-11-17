#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillMetalDetector.generated.h"

UCLASS()
class PAL_API UPalCoopSkillMetalDetector : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SearchRangeEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExtendRangePerSecEffectOffset;
    
public:
    UPalCoopSkillMetalDetector();

    UFUNCTION(BlueprintCallable)
    void MetalDetector(const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId);
    
};

