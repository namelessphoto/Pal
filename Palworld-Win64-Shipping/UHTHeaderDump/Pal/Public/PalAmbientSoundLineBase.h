#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalAmbientSoundLineBase.generated.h"

class UAkComponent;
class UBoxComponent;
class UPalAmbientSoundLineObject;

UCLASS()
class PAL_API APalAmbientSoundLineBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBoxComponent* ActivateTrigger;
    
protected:
    UPROPERTY()
    UPalAmbientSoundLineObject* AmbinetSoundLineObject;
    
public:
    APalAmbientSoundLineBase(const FObjectInitializer& ObjectInitializer);

};

