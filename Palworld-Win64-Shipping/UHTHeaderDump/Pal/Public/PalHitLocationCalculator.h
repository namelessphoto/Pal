#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalHitLocationCalculator.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class UPalHitLocationCalculator : public UObject {
    GENERATED_BODY()
public:
    UPalHitLocationCalculator();

    UFUNCTION(BlueprintNativeEvent)
    FVector CalcLocation(UPrimitiveComponent* MyHitComponent, UPrimitiveComponent* OtherHitComponent);
    
};

