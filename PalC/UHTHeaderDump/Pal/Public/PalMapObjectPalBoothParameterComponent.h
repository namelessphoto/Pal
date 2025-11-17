#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectPalBoothParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectPalBoothParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CollectSlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CorruptionMultiplier;
    
    UPalMapObjectPalBoothParameterComponent(const FObjectInitializer& ObjectInitializer);

};

