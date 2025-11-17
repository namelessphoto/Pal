#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterInitialCharacter.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterInitialCharacter : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalIndividualCharacterSaveParameter CharacterSaveParameter;
    
    UPROPERTY()
    FPalInstanceID InstanceId;
    
    UPROPERTY()
    bool CreateLocationPoint;
    
    UPalMapObjectModelInitializeExtraParameterInitialCharacter();

};

