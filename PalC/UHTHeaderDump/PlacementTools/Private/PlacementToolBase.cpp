#include "PlacementToolBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APlacementToolBase::APlacementToolBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->isInEditor = true;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->EasySelectBillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Icon"));
    this->PlacementMode = EPlacementMode::Free;
    this->PlacementStyle = EPlacementStyle::Fade;
    this->Amount = 10;
    this->Seed = 0;
    this->bRandomizeRotation = false;
    this->bRandomizeScale = false;
    this->bUniformScale = true;
    this->bRotateToSurface = false;
    this->bAdjustToSurface = false;
    this->bAvoidOverlapBounds = false;
    this->bDeleteChildrenWhenDeleted = true;
    this->bHideBrush = false;
    this->EasySelectBillboard->SetupAttachment(RootComponent);
}

void APlacementToolBase::RandomizeSeed() {
}

void APlacementToolBase::Generate() {
}


