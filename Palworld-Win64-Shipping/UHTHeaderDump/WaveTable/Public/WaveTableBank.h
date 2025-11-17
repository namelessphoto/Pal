#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EWaveTableResolution.h"
#include "WaveTableBankEntry.h"
#include "WaveTableBank.generated.h"

UCLASS(EditInlineNew)
class WAVETABLE_API UWaveTableBank : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWaveTableResolution Resolution;
    
    UPROPERTY(EditAnywhere)
    bool bBipolar;
    
    UPROPERTY(EditAnywhere)
    TArray<FWaveTableBankEntry> Entries;
    
    UWaveTableBank();

};

