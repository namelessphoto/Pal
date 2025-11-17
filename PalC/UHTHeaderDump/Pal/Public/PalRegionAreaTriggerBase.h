#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalDataTableRowName_WorldMapAreaData.h"
#include "PalRegionAreaTriggerBase.generated.h"

UCLASS()
class PAL_API APalRegionAreaTriggerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FPalDataTableRowName_WorldMapAreaData AreaName;
    
    APalRegionAreaTriggerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlap(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OtherActor);
    
};

