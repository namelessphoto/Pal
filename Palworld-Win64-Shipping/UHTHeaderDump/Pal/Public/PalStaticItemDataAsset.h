#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalStaticItemDataAsset.generated.h"

class AActor;
class UPalStaticItemDataBase;

UCLASS(BlueprintType)
class PAL_API UPalStaticItemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, UPalStaticItemDataBase*> StaticItemDataMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> UndefinedVisualBlueprintClassSoft;
    
    UPalStaticItemDataAsset();

};

