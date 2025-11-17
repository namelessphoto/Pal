#pragma once
#include "CoreMinimal.h"
#include "PalGameStateReplicatorBase.h"
#include "PalOptionWorldSettings.h"
#include "PalOptionReplicator.generated.h"

UCLASS(MinimalAPI)
class UPalOptionReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_OptionWorldSettings)
    FPalOptionWorldSettings OptionWorldSettings;
    
public:
    UPalOptionReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_OptionWorldSettings();
    
};

