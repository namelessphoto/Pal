#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalMapObjectBlueprintDataAssetResetParameter.h"
#include "PalMapObjectBlueprintDataAssetUtility.generated.h"

class UDataTable;
class UObject;
class UPalMapObjectBlueprintDataAsset;

UCLASS(BlueprintType)
class UPalMapObjectBlueprintDataAssetUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapObjectBlueprintDataAssetUtility();

    UFUNCTION(BlueprintCallable)
    static void ResetBlueprintComponentByMapObjectBlueprintAsset(UObject* AssetObject, UPalMapObjectBlueprintDataAsset* BlueprintAsset, UDataTable* EnemyCampMapObjectMasterDataTable, const FPalMapObjectBlueprintDataAssetResetParameter& ResetParameter);
    
};

