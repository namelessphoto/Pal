#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalAudioState.h"
#include "PalSpotAreaBase.generated.h"

class APalPlayerCharacter;
class UPrimitiveComponent;

UCLASS()
class PAL_API APalSpotAreaBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EPalAudioState AudioState;
    
private:
    UPROPERTY(VisibleAnywhere)
    bool bIsOverlappedLocalPlayer;
    
public:
    APalSpotAreaBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter);
    
protected:
    UFUNCTION(BlueprintPure)
    EPalAudioState GetAudioState() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UPrimitiveComponent* GetAreaCollision() const;
    
};

