#pragma once
#include "CoreMinimal.h"
#include "PalStageEnterParameterBase.h"
#include "PalStageEnterParameterRoom.generated.h"

class UPalStageRoomReturnBackInfoBase;

UCLASS()
class UPalStageEnterParameterRoom : public UPalStageEnterParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    UPalStageRoomReturnBackInfoBase* ReturnBackInfo;
    
    UPalStageEnterParameterRoom();

};

