#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalArenaSequenceType.h"
#include "PalArenaSpectateRoomInfo.h"
#include "PalArenaSpectateRoomInfoObject.generated.h"

class UPalArenaSequencer;

UCLASS()
class UPalArenaSpectateRoomInfoObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    TArray<FPalArenaSpectateRoomInfo> InfoList;
    
public:
    UPalArenaSpectateRoomInfoObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnSequencerDelete(UPalArenaSequencer* Sequencer);
    
    UFUNCTION()
    void OnSequenceChanged(UPalArenaSequencer* Sequencer, EPalArenaSequenceType PrevType, EPalArenaSequenceType CurrentType);
    
};

