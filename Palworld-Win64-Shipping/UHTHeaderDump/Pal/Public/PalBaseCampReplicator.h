#pragma once
#include "CoreMinimal.h"
#include "FastPalBaseCampRepInfoArray.h"
#include "PalGameStateReplicatorBase.h"
#include "PalBaseCampReplicator.generated.h"

UCLASS(MinimalAPI)
class UPalBaseCampReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FFastPalBaseCampRepInfoArray RepInfoArray;
    
public:
    UPalBaseCampReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

