#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalDungeonSpawnerDataAsset.generated.h"

UCLASS()
class PAL_API UPalDungeonSpawnerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FName> SpawnerPatternNames;
    
    UPalDungeonSpawnerDataAsset();

};

