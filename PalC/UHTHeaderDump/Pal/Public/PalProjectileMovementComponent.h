#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
#include "PalProjectileMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bUseHomingAngleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HomingAngleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIgnoreHomingAngleLimitUntilEnteringAngleReached;
    
    UPROPERTY(Transient)
    bool bEnteringAngleReached;
    
public:
    UPalProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

