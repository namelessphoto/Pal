#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_WorldMap.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_WorldMap : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool CanFastTravel;
    
    UPROPERTY(BlueprintReadWrite)
    bool ForRespawn;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsInitSelect;
    
    UPROPERTY(BlueprintReadWrite)
    FName FocusQuestId;
    
    UPalHUDDispatchParameter_WorldMap();

};

