#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalDataTableRowName_ItemData.h"
#include "PalMapObjectBreedFarmParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBreedFarmParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BreedRequiredRealTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ExistPalEggMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPalDataTableRowName_ItemData> TargetItemIds;
    
    UPalMapObjectBreedFarmParameterComponent(const FObjectInitializer& ObjectInitializer);

};

