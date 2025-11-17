#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalOtomoPalOrderType.h"
#include "PalContainerId.h"
#include "PalPlayerOtomoData.generated.h"

UCLASS()
class PAL_API UPalPlayerOtomoData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalContainerId OtomoCharacterContainerId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalOtomoPalOrderType OtomoOrder;
    
public:
    UPalPlayerOtomoData();

};

