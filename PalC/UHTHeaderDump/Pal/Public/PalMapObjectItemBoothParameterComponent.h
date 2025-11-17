#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectItemBoothParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectItemBoothParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StoreSlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CollectSlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CorruptionMultiplier;
    
    UPalMapObjectItemBoothParameterComponent(const FObjectInitializer& ObjectInitializer);

};

