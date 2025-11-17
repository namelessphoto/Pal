#include "CameraCalibrationCheckerboard.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "CalibrationPointComponent.h"

ACameraCalibrationCheckerboard::ACameraCalibrationCheckerboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->TopLeft = CreateDefaultSubobject<UCalibrationPointComponent>(TEXT("TopLeft"));
    this->TopRight = CreateDefaultSubobject<UCalibrationPointComponent>(TEXT("TopRight"));
    this->BottomLeft = CreateDefaultSubobject<UCalibrationPointComponent>(TEXT("BottomLeft"));
    this->BottomRight = CreateDefaultSubobject<UCalibrationPointComponent>(TEXT("BottomRight"));
    this->Center = CreateDefaultSubobject<UCalibrationPointComponent>(TEXT("Center"));
    this->NumCornerRows = 2;
    this->NumCornerCols = 2;
    this->SquareSideLength = 3.21f;
    this->Thickness = 0.10f;
    this->OddCubeMaterial = NULL;
    this->EvenCubeMaterial = NULL;
    this->BottomLeft->SetupAttachment(RootComponent);
    this->BottomRight->SetupAttachment(RootComponent);
    this->Center->SetupAttachment(RootComponent);
    this->TopLeft->SetupAttachment(RootComponent);
    this->TopRight->SetupAttachment(RootComponent);
}

void ACameraCalibrationCheckerboard::Rebuild() {
}


