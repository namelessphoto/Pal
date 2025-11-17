#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalArenaOutAreaChecker.generated.h"

class AActor;
class APalCharacter;
class UPalArenaSequencer;
class UPrimitiveComponent;

UCLASS()
class UPalArenaOutAreaChecker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPalArenaSequencer* ArenaSequencer;
    
    UPROPERTY()
    FTimerHandle OutAreaCheckTimerHandle;
    
public:
    UPalArenaOutAreaChecker();

private:
    UFUNCTION()
    void ReturnCharacter(APalCharacter* Character);
    
    UFUNCTION()
    void CheckOutAreaCharacter();
    
    UFUNCTION()
    void BeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

