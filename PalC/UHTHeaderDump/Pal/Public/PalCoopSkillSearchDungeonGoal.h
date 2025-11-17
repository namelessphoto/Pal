#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillSearchDungeonGoal.generated.h"

UCLASS()
class PAL_API UPalCoopSkillSearchDungeonGoal : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchDungeonGoal();

    UFUNCTION(BlueprintCallable)
    bool SearchDungeonGoal(const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId, FVector& OutGoalLocation);
    
};

