#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalMapObject.h"
#include "PalMapObjectDropItem.generated.h"

UCLASS()
class PAL_API APalMapObjectDropItem : public APalMapObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    bool bMovementActive;
    
public:
    APalMapObjectDropItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(NetMulticast, Reliable)
    void StopMovement_Multicast(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION()
    void OnProceedTimerMovementActive();
    
};

