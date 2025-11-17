#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectDropTreasureLotteryParameter.h"
#include "PalMapObjectDropTreasureParameterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectDropTreasureParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPalMapObjectDropTreasureLotteryParameter> DropTreasureLotteryParameters;
    
    UPalMapObjectDropTreasureParameterComponent(const FObjectInitializer& ObjectInitializer);

};

