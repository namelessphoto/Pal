#include "BoxPlacement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ABoxPlacement::ABoxPlacement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxBrush = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxBrush"));
    this->TraceChannel = ECollisionChannel::ECC_Visibility;
    this->BoxBrush->SetupAttachment(RootComponent);
}


