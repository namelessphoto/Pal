#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalInstanceID.h"
#include "PalMapObjectCharacterTeamMissionIndividual.h"
#include "PalMapObjectCharacterTeamMissionIndividualRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectCharacterTeamMissionIndividualRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalInstanceID IndividualId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalMapObjectCharacterTeamMissionIndividual IndividualInfo;
    
    PAL_API FPalMapObjectCharacterTeamMissionIndividualRepInfo();
};

