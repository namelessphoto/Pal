#include "PalAmbientSoundLineBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APalAmbientSoundLineBase::APalAmbientSoundLineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ActivateTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ActivateTrigger"));
    this->AmbinetSoundLineObject = NULL;
    this->ActivateTrigger->SetupAttachment(RootComponent);
}


