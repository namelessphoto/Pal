#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterNote.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterNote : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName NoteRowName;
    
    UPalMapObjectModelInitializeExtraParameterNote();

};

