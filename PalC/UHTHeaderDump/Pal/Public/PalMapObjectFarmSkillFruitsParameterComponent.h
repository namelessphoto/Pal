#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Templates/SubclassOf.h"
#include "PalMapObjectFarmSkillFruitsParameterComponent.generated.h"

class APalMapObjectFarmSkillFruitsTree;
class UPalUserWidgetOverlayUI;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectFarmSkillFruitsParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float GrowupTime;
    
    UPROPERTY(EditDefaultsOnly)
    float WateringWorkAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalMapObjectFarmSkillFruitsTree> FarmSkillFruitsTreeClass;
    
    UPalMapObjectFarmSkillFruitsParameterComponent(const FObjectInitializer& ObjectInitializer);

};

