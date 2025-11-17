#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalDebugAutoBaseCampBuilderWorker.h"
#include "PalInstanceID.h"
#include "PalDebugAutoBaseCampBuilder.generated.h"

UCLASS()
class APalDebugAutoBaseCampBuilder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TArray<FPalDebugAutoBaseCampBuilderWorker> Workers;
    
    UPROPERTY(EditInstanceOnly)
    bool bRandomPassiveSkill;
    
public:
    APalDebugAutoBaseCampBuilder(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnCreatedIndividual_ServerInternal(FPalInstanceID ID);
    
};

