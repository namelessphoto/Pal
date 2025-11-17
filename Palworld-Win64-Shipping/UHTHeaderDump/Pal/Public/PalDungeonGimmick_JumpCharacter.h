#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmick_JumpCharacter.generated.h"

class AActor;
class ACharacter;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS()
class PAL_API APalDungeonGimmick_JumpCharacter : public APalDungeonLevelGimmickBase {
    GENERATED_BODY()
public:
    APalDungeonGimmick_JumpCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnOverlapTriggerCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LaunchCharacter(ACharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UShapeComponent* GetTriggerCollision() const;
    
};

