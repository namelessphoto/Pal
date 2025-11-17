#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObjectCharacterTeamMission.generated.h"

class UPalUIMapObjectCharacterTeamMissionModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_MapObjectCharacterTeamMission : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalUIMapObjectCharacterTeamMissionModel* Model;
    
    UPalHUDDispatchParameter_MapObjectCharacterTeamMission();

};

