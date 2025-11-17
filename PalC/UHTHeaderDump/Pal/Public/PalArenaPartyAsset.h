#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalDebugOtomoPalInfo.h"
#include "PalArenaPartyAsset.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalArenaPartyAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPalDebugOtomoPalInfo> PalInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RidePalIndex;
    
    UPalArenaPartyAsset();

};

