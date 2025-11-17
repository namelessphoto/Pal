#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalSkyLightVolume.generated.h"

class USkyLightComponent;

UCLASS()
class PAL_API APalSkyLightVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkyLightComponent* Component;
    
public:
    UPROPERTY(ReplicatedUsing=OnRep_bEnabled)
    uint8 bEnabled: 1;
    
private:
    UPROPERTY(EditAnywhere)
    bool bDisableEnabledFlag;
    
public:
    APalSkyLightVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_bEnabled();
    
};

