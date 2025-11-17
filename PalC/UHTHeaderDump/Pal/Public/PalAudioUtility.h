#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalAudioUtility.generated.h"

class APalAmbientSoundAreaBase;
class APalPlayerCharacter;
class APalSpotAreaBase;
class UObject;
class UPalBaseCampModel;

UCLASS(BlueprintType)
class PAL_API UPalAudioUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalAudioUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OnPlayerExitSpot(UObject* WorldContextObject, APalPlayerCharacter* Player, APalSpotAreaBase* SpotArea);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OnPlayerExitBaseCamp(UObject* WorldContextObject, APalPlayerCharacter* Player, UPalBaseCampModel* BaseCampModel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OnPlayerExitAmbientArea(UObject* WorldContextObject, APalPlayerCharacter* Player, APalAmbientSoundAreaBase* SpotArea);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OnPlayerEnterSpot(UObject* WorldContextObject, APalPlayerCharacter* Player, APalSpotAreaBase* SpotArea);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OnPlayerEnterBaseCamp(UObject* WorldContextObject, APalPlayerCharacter* Player, UPalBaseCampModel* BaseCampModel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OnPlayerEnterAmbientArea(UObject* WorldContextObject, APalPlayerCharacter* Player, APalAmbientSoundAreaBase* SpotArea);
    
};

