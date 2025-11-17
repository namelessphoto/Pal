#include "PalBuildObjectLab.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PalMapObjectLabModel.h"

APalBuildObjectLab::APalBuildObjectLab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ConcreteModelClass = UPalMapObjectLabModel::StaticClass();
    this->ResearchSpaceVisualComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ResearchSpaceVisualComponent"));
    this->ResearchSpaceVisualComponent->SetupAttachment(RootComponent);
}

void APalBuildObjectLab::OnUpdateCurrentResearch_ServerInternal(UPalMapObjectLabModel* Model) {
}

void APalBuildObjectLab::OnSetConcreteModelAfterAvailable(UPalMapObjectConcreteModelBase* ConcreteModel) {
}


