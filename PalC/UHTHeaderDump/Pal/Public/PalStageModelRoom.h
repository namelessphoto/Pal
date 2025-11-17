#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalStageModelBase.h"
#include "PalStageRoomPlayerInfo.h"
#include "PalStageModelRoom.generated.h"

class UDataLayerInstance;

UCLASS()
class PAL_API UPalStageModelRoom : public UPalStageModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    UDataLayerInstance* ReservedDataLayerInstance;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalStageRoomPlayerInfo> RoomPlayerInfoMap;
    
public:
    UPalStageModelRoom();

};

