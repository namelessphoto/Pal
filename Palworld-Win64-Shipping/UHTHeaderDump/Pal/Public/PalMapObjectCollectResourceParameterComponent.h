#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalDataTableRowName_ItemData.h"
#include "PalMapObjectCollectResourceParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectCollectResourceParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPalDataTableRowName_ItemData> TargetItemIds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AdditionalRangeOutOfBaseCamp;
    
    UPalMapObjectCollectResourceParameterComponent(const FObjectInitializer& ObjectInitializer);

};

