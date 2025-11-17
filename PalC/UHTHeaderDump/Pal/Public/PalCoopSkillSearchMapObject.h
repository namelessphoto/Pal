#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillSearchMapObject.generated.h"

UCLASS()
class PAL_API UPalCoopSkillSearchMapObject : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchMapObject();

    UFUNCTION(BlueprintCallable)
    void SearchMapObjects(const TArray<FName>& SearchMapObjIds, const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId);
    
};

