#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalStaticSkinDataAsset.generated.h"

class UPalSkinDataBase;

UCLASS(BlueprintType)
class PAL_API UPalStaticSkinDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<FName, UPalSkinDataBase*> StaticSkinMap;
    
    UPalStaticSkinDataAsset();

};

