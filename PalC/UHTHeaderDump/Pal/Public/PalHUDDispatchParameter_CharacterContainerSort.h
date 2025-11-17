#pragma once
#include "CoreMinimal.h"
#include "EPalUIBoxSortWindowType.h"
#include "PalContainerId.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_CharacterContainerSort.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_CharacterContainerSort : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EPalUIBoxSortWindowType SortContainerType;
    
    UPalHUDDispatchParameter_CharacterContainerSort();

};

