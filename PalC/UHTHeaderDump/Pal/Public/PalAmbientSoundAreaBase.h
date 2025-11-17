#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalAmbientSoundAreaData.h"
#include "PalAmbientSoundAreaBase.generated.h"

class APalPlayerCharacter;
class UAkAudioEvent;
class UPrimitiveComponent;

UCLASS()
class PAL_API APalAmbientSoundAreaBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AmbientPriority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UAkAudioEvent*> DayAmbientEvents;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UAkAudioEvent*> NightAmbientEvents;
    
private:
    UPROPERTY(VisibleAnywhere)
    bool bIsOverlappedLocalPlayer;
    
public:
    APalAmbientSoundAreaBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter);
    
protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UPrimitiveComponent* GetAreaCollision() const;
    
public:
    UFUNCTION(BlueprintPure)
    FPalAmbientSoundAreaData GetAmbientSoundAreaData() const;
    
};

