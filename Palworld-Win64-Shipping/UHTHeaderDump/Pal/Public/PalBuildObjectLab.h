#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectLab.generated.h"

class UChildActorComponent;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectLabModel;

UCLASS()
class PAL_API APalBuildObjectLab : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UChildActorComponent* ResearchSpaceVisualComponent;
    
public:
    APalBuildObjectLab(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnUpdateCurrentResearch_ServerInternal(UPalMapObjectLabModel* Model);
    
    UFUNCTION()
    void OnSetConcreteModelAfterAvailable(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

