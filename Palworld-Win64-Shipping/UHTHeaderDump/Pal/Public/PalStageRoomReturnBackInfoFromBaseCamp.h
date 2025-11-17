#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalStageRoomReturnBackInfoBase.h"
#include "PalStageRoomReturnBackInfoFromBaseCamp.generated.h"

UCLASS()
class UPalStageRoomReturnBackInfoFromBaseCamp : public UPalStageRoomReturnBackInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleInstanceOnly)
    FGuid FromBaseCampId;
    
public:
    UPalStageRoomReturnBackInfoFromBaseCamp();

};

