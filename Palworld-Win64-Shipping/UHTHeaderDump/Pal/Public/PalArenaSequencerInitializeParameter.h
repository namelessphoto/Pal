#pragma once
#include "CoreMinimal.h"
#include "EPalArenaSequenceType.h"
#include "GameDateTime.h"
#include "PalArenaPlayerInitializeParameter.h"
#include "PalArenaSequencerInitializeParameter.generated.h"

class UPalArenaInstanceModel;

USTRUCT(BlueprintType)
struct FPalArenaSequencerInitializeParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalArenaPlayerInitializeParameter> PlayerParams;
    
    UPROPERTY()
    UPalArenaInstanceModel* ArenaInstanceModel;
    
    UPROPERTY()
    bool bIsSpectate;
    
    UPROPERTY()
    EPalArenaSequenceType StartSequenceType;
    
    UPROPERTY()
    FGameDateTime ServerSequenceBeginTime;
    
    PAL_API FPalArenaSequencerInitializeParameter();
};

