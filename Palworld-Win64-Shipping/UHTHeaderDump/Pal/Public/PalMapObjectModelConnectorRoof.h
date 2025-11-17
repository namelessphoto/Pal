#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelConnectInfo.h"
#include "PalMapObjectModelConnectorBase.h"
#include "PalMapObjectModelConnectorRoof.generated.h"

UCLASS()
class PAL_API UPalMapObjectModelConnectorRoof : public UPalMapObjectModelConnectorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo FrontConnectInfo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo BackConnectInfo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo LeftConnectInfo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo RightConnectInfo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo CornerFrontLeftConnectInfo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo CornerFrontRightConnectInfo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo CornerBackLeftConnectInfo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo CornerBackRightConnectInfo;
    
public:
    UPalMapObjectModelConnectorRoof();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

