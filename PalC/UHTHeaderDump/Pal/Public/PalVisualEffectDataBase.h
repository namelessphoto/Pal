#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalVisualEffectID.h"
#include "Templates/SubclassOf.h"
#include "PalVisualEffectDataBase.generated.h"

class UMaterialParameterCollection;
class UPalVisualEffectBase;

UCLASS(BlueprintType)
class UPalVisualEffectDataBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalVisualEffectID, TSoftClassPtr<UPalVisualEffectBase>> VisualEffectClassDataReference;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* MosaicMaterialParameterCollection;
    
private:
    UPROPERTY(Transient)
    TMap<EPalVisualEffectID, TSubclassOf<UPalVisualEffectBase>> VisualEffectClassDataAsset;
    
public:
    UPalVisualEffectDataBase();

    UFUNCTION(BlueprintCallable)
    FName GetMosaicKeyName();
    
};

