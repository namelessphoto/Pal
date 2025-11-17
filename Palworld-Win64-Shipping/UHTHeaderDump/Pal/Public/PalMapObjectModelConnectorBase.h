#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMapObjectModelConnectInfo.h"
#include "PalMapObjectModelConnectorBase.generated.h"

UCLASS(Abstract)
class PAL_API UPalMapObjectModelConnectorBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 SupportedLevel;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalMapObjectModelConnectInfo ConnectInfoAnyPlace;
    
public:
    UPalMapObjectModelConnectorBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

