#include "PalEditorMapObjectCheckPlacer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APalEditorMapObjectCheckPlacer::APalEditorMapObjectCheckPlacer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->LeftEdgeArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("LeftEdgeArrow"));
    this->RightEdgeArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("WidthEdgeArrow"));
    this->StackRowArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("StackRowArrow"));
    this->LeftEdgeArrow->SetupAttachment(RootComponent);
    this->RightEdgeArrow->SetupAttachment(RootComponent);
    this->StackRowArrow->SetupAttachment(RootComponent);
}

void APalEditorMapObjectCheckPlacer::PlaceMapObjects() {
}


