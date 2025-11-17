#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalExponentialHeightFogVolume.generated.h"

class UExponentialHeightFogComponent;

UCLASS()
class PAL_API APalExponentialHeightFogVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* Component;
    
public:
    UPROPERTY(ReplicatedUsing=OnRep_bEnabled)
    uint8 bEnabled: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableSwitchVisibility;
    
private:
    UPROPERTY(EditAnywhere)
    bool bDisableEnabledFlag;
    
public:
    APalExponentialHeightFogVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_bEnabled();
    
};

