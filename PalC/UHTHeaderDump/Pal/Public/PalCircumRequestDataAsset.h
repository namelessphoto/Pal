#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalCircumRequestData.h"
#include "PalCircumRequestDataAsset.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalCircumRequestDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FName, FPalCircumRequestData> ItemRequestDataMap;
    
    UPalCircumRequestDataAsset();

    UFUNCTION(BlueprintCallable)
    void Build();
    
};

