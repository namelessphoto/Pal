#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectShippingItemParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectShippingItemParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> ShippingHours;
    
    UPalMapObjectShippingItemParameterComponent(const FObjectInitializer& ObjectInitializer);

};

