#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillSearchCharacter.generated.h"

UCLASS()
class PAL_API UPalCoopSkillSearchCharacter : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchCharacter();

    UFUNCTION(BlueprintCallable)
    void SearchMonsters(const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId);
    
};

