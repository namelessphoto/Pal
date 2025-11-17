#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFoliageModelSingleDelegateDelegate.generated.h"

class UPalMapObjectFoliageModel;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FPalMapObjectFoliageModelSingleDelegate, UPalMapObjectFoliageModel*, Model);

