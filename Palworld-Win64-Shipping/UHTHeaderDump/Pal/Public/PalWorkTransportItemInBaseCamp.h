#pragma once
#include "CoreMinimal.h"
#include "EPalWorkTransportItemType.h"
#include "PalWorkBase.h"
#include "PalWorkTransportItemInBaseCamp.generated.h"

UCLASS()
class PAL_API UPalWorkTransportItemInBaseCamp : public UPalWorkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalWorkTransportItemType TransportType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float ApproachFailedTimeout;
    
public:
    UPalWorkTransportItemInBaseCamp();

};

