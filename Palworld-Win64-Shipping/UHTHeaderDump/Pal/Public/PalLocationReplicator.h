#pragma once
#include "CoreMinimal.h"
#include "FastPalLocationRepInfoArray.h"
#include "PalGameStateReplicatorBase.h"
#include "PalLocationReplicator.generated.h"

UCLASS(MinimalAPI)
class UPalLocationReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FFastPalLocationRepInfoArray RepInfoArray;
    
public:
    UPalLocationReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

