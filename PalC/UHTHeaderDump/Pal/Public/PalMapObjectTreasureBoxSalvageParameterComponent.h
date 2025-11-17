#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Templates/SubclassOf.h"
#include "PalMapObjectTreasureBoxSalvageParameterComponent.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectTreasureBoxSalvageParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float GaugeStartPercent;
    
    UPROPERTY(EditDefaultsOnly)
    float GaugeEndPercent;
    
    UPROPERTY(EditDefaultsOnly)
    float GaugeRangePercent;
    
    UPROPERTY(EditDefaultsOnly)
    float CursorPercentSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> SalvageGameUIClass;
    
    UPalMapObjectTreasureBoxSalvageParameterComponent(const FObjectInitializer& ObjectInitializer);

};

