#pragma once
#include "CoreMinimal.h"
#include "PalStageAreaInfo.h"
#include "PalStageInstanceId.h"
#include "PalStageRoomInfo.h"
#include "PalWorldSubsystem.h"
#include "PalStageWorldSubsystem.generated.h"

class UDataLayerAsset;
class UPalStageModelBase;

UCLASS()
class PAL_API UPalStageWorldSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSimpleMulticastDelegate OnEnteredStageInClient;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleMulticastDelegate OnReturnToFieldFromStageInClient;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalStageInstanceId, UPalStageModelBase*> StageModelMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<UDataLayerAsset*, FPalStageAreaInfo> StageAreaInfoMap;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalStageRoomInfo> RoomInfos;
    
public:
    UPalStageWorldSubsystem();

};

