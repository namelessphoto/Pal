#pragma once
#include "CoreMinimal.h"
#include "EPalAudioStateGroup.h"
#include "PalArenaTestParameter.generated.h"

class AActor;
class UPalArenaPartyAsset;

USTRUCT(BlueprintType)
struct FPalArenaTestParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPalArenaPartyAsset* Player1Data;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPalArenaPartyAsset* Player2Data;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* Player1StartPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* Player2StartPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AActor*> Player1PalPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AActor*> Player2PalPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalAudioStateGroup BattleBGMStateGroup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RideDelayTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRandomPartyMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RandomPartyPalLevel;
    
    PAL_API FPalArenaTestParameter();
};

