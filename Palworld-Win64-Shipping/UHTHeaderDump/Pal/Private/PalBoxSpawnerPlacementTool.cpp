#include "PalBoxSpawnerPlacementTool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

APalBoxSpawnerPlacementTool::APalBoxSpawnerPlacementTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
}


