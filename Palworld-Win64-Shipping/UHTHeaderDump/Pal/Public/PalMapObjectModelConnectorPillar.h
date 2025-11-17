#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelConnectInfo.h"
#include "PalMapObjectModelConnectorBase.h"
#include "PalMapObjectModelConnectorPillar.generated.h"

UCLASS()
class PAL_API UPalMapObjectModelConnectorPillar : public UPalMapObjectModelConnectorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo UpConnectInfo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo DownConnectInfo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bStuckInBackground;
    
public:
    UPalMapObjectModelConnectorPillar();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

