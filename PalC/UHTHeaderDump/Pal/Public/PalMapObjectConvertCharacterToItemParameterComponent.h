#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectConvertCharacterToItemParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectConvertCharacterToItemParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ContainerSlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ConvertQueueCapacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RequiredConvertProcessTime;
    
    UPalMapObjectConvertCharacterToItemParameterComponent(const FObjectInitializer& ObjectInitializer);

};

