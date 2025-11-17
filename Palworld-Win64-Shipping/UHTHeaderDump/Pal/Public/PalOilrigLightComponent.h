#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalOilrigHandledActorInterface.h"
#include "PalOilrigLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalOilrigLightComponent : public UActorComponent, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
    UPalOilrigLightComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeLightColor(bool IsCombat);
    

    // Fix for true pure virtual functions not being implemented
};

