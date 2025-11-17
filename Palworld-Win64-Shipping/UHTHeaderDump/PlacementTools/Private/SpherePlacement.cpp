#include "SpherePlacement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ASpherePlacement::ASpherePlacement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 350.00f;
    this->SphereBrush = CreateDefaultSubobject<USphereComponent>(TEXT("SphereBrush"));
    this->FadeDirection = EFadeAxis::All;
    this->TraceChannel = ECollisionChannel::ECC_Visibility;
    this->SphereBrush->SetupAttachment(RootComponent);
}


