#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameter_TeamMission.generated.h"

class UPalUIMapObjectCharacterTeamMissionModel;

UCLASS()
class UPalUIMapObjectStatusIndicatorParameter_TeamMission : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPalUIMapObjectCharacterTeamMissionModel* UIModel;
    
    UPalUIMapObjectStatusIndicatorParameter_TeamMission();

private:
    UFUNCTION(BlueprintPure)
    UPalUIMapObjectCharacterTeamMissionModel* GetUIModel() const;
    
};

