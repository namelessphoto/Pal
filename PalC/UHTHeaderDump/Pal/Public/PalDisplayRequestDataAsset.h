#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalDisplayRequestData.h"
#include "PalDisplayRequestDataAsset.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalDisplayRequestDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FName, FPalDisplayRequestData> DisplayRequestDataMap;
    
    UPalDisplayRequestDataAsset();

    UFUNCTION(BlueprintCallable)
    void Build();
    
};

