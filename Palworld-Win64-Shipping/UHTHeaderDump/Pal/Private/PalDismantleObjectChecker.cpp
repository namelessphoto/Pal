#include "PalDismantleObjectChecker.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APalDismantleObjectChecker::APalDismantleObjectChecker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TargetBuildObject = NULL;
}

APalBuildObject* APalDismantleObjectChecker::GetTargetObject() {
    return NULL;
}


