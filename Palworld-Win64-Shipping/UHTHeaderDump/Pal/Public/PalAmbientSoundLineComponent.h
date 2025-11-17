#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "PalAmbientSoundLineComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UPalAmbientSoundLineObject;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalAmbientSoundLineComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* AmbientEvent;
    
    UPROPERTY(EditAnywhere)
    bool bIsEnableAmbientSound;
    
private:
    UPROPERTY()
    UPalAmbientSoundLineObject* AmbinetSoundLineObject;
    
    UPROPERTY(Instanced)
    UAkComponent* AkComponent;
    
public:
    UPalAmbientSoundLineComponent(const FObjectInitializer& ObjectInitializer);

};

