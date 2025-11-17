#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelConnectInfo.h"
#include "PalMapObjectModelConnectorBase.h"
#include "PalMapObjectModelConnectorWallV2.generated.h"

UCLASS()
class PAL_API UPalMapObjectModelConnectorWallV2 : public UPalMapObjectModelConnectorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo UpConnectInfo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo DownConnectInfo;
    
public:
    UPalMapObjectModelConnectorWallV2();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

