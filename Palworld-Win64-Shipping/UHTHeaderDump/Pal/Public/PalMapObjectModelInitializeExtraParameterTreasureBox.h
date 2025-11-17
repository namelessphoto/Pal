#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterTreasureBox.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterTreasureBox : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalMapObjectTreasureGradeType GradeType;
    
    UPalMapObjectModelInitializeExtraParameterTreasureBox();

};

