#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalSphereBodyBase.generated.h"

class APalCharacter;

UCLASS()
class APalSphereBodyBase : public AActor {
    GENERATED_BODY()
public:
    APalSphereBodyBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void SetupInternal(APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSneakBonusFlagInternal(bool isSneak);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCriticalCaptureFlagInternal(bool bIsCritical);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCaptureLevelInternal(int32 Level);
    
    UFUNCTION(NetMulticast, Reliable)
    void RPCDummy();
    
};

