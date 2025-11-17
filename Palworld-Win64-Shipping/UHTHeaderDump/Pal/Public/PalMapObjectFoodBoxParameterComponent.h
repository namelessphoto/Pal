#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectFoodBoxParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectFoodBoxParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CorruptionMultiplier;
    
    UPalMapObjectFoodBoxParameterComponent(const FObjectInitializer& ObjectInitializer);

};

