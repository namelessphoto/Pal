#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalDebugWindowSetting.generated.h"

UCLASS()
class PAL_API UPalDebugWindowSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> PriorityFunctions;
    
    UPalDebugWindowSetting();

};

