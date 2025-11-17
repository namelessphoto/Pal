#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectTreasureBoxLockComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectTreasureBoxLockComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName UnlockWorkAssignDefineId;
    
    UPROPERTY(EditDefaultsOnly)
    float UnlockWorkRequiredRealSeconds;
    
    UPalMapObjectTreasureBoxLockComponent(const FObjectInitializer& ObjectInitializer);

};

