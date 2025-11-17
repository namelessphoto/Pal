#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalMapObjectBlueprintPart.h"
#include "PalMapObjectBlueprintDataAsset.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalMapObjectBlueprintDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FPalMapObjectBlueprintPart> Parts;
    
    UPalMapObjectBlueprintDataAsset();

};

