#pragma once
#include "CoreMinimal.h"
#include "PalSignificanceUpdaterBase.h"
#include "PalSignificanceUpdater_MapObject.generated.h"

UCLASS(Config=Game)
class UPalSignificanceUpdater_MapObject : public UPalSignificanceUpdaterBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    int32 SignificanceUpdateProcessingFrames;
    
    UPROPERTY(Config)
    int32 SignificanceCalculationProcessingFrames;
    
public:
    UPalSignificanceUpdater_MapObject();

};

