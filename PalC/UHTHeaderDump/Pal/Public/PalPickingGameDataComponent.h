#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalMapObjectTreasureGradeType.h"
#include "EPalPickingGameDifficultyType.h"
#include "Templates/SubclassOf.h"
#include "PalPickingGameDataComponent.generated.h"

class UPalPickingGameProcessor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalPickingGameDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPickingGameProcessor> PickingGameProcessorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalMapObjectTreasureGradeType, EPalPickingGameDifficultyType> TreasureBoxGradeDifficultyMap;
    
public:
    UPalPickingGameDataComponent(const FObjectInitializer& ObjectInitializer);

};

