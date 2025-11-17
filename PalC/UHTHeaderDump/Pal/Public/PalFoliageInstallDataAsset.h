#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalFoliageInstallDataAsset.generated.h"

class UPalFoliageInstallDataAssetByIFA;

UCLASS()
class PAL_API UPalFoliageInstallDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<FName, TSoftObjectPtr<UPalFoliageInstallDataAssetByIFA>> InstallDataSetMap;
    
public:
    UPalFoliageInstallDataAsset();

};

