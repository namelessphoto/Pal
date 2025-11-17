#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalFastMapObjectCharacterTeamMissionIndividualRepInfoArray.h"
#include "PalMapObjectCharacterTeamMissionAssignedInfo.generated.h"

UCLASS()
class PAL_API UPalMapObjectCharacterTeamMissionAssignedInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalFastMapObjectCharacterTeamMissionIndividualRepInfoArray RepInfoArray;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 RequiredElementalCharacterNum;
    
    UPalMapObjectCharacterTeamMissionAssignedInfo();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

