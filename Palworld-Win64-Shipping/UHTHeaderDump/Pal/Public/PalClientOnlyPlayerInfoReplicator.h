#pragma once
#include "CoreMinimal.h"
#include "FastPlayerPlatformInfoArray.h"
#include "PalGameStateReplicatorBase.h"
#include "PalClientOnlyPlayerInfoReplicator.generated.h"

UCLASS(MinimalAPI)
class UPalClientOnlyPlayerInfoReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FFastPlayerPlatformInfoArray RepPlayerPlatformInfoArray;
    
public:
    UPalClientOnlyPlayerInfoReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

