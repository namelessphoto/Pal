#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=EAkCallbackType -FallbackName=EAkCallbackType
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PalAmbientSoundLineObject.generated.h"

class AActor;
class UAkCallbackInfo;
class UAkComponent;
class UBoxComponent;
class UPrimitiveComponent;
class USplineComponent;

UCLASS()
class UPalAmbientSoundLineObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<USplineComponent*> SplineComponents;
    
    UPROPERTY(Instanced)
    UBoxComponent* ActivateTrigger;
    
    UPROPERTY(Instanced)
    UAkComponent* AkComponent;
    
public:
    UPalAmbientSoundLineObject();

    UFUNCTION()
    void PlayedSoundCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
private:
    UFUNCTION()
    void OnActivateTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnActivateTriggerLineOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};

