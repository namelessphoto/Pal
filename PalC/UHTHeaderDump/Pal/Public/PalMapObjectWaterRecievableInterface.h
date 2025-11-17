#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalMapObjectWaterRecievableInterface.generated.h"

class AActor;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalMapObjectWaterRecievableInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMapObjectWaterRecievableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void OnWaterOneshot(AActor* Waterer) PURE_VIRTUAL(OnWaterOneshot,);
    
    UFUNCTION(BlueprintCallable)
    virtual void OnWateringEnd(AActor* Waterer) PURE_VIRTUAL(OnWateringEnd,);
    
    UFUNCTION(BlueprintCallable)
    virtual void OnWateringBegin(AActor* Waterer) PURE_VIRTUAL(OnWateringBegin,);
    
};

