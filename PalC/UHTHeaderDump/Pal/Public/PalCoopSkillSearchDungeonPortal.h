#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillSearchDungeonPortal.generated.h"

UCLASS()
class PAL_API UPalCoopSkillSearchDungeonPortal : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchDungeonPortal();

    UFUNCTION(BlueprintCallable)
    void SearchDungeonPortal(const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId);
    
};

