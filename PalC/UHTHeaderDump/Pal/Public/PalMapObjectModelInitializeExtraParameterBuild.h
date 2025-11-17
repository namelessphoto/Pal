#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterBuild.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterBuild : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float BuildWorkAmount;
    
    UPROPERTY()
    bool bNotPlayBuildFX;
    
    UPalMapObjectModelInitializeExtraParameterBuild();

};

