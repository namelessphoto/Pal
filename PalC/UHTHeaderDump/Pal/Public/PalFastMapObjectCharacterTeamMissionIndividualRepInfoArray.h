#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalMapObjectCharacterTeamMissionIndividualRepInfo.h"
#include "PalFastMapObjectCharacterTeamMissionIndividualRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastMapObjectCharacterTeamMissionIndividualRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalMapObjectCharacterTeamMissionIndividualRepInfo> Items;
    
    PAL_API FPalFastMapObjectCharacterTeamMissionIndividualRepInfoArray();
};

