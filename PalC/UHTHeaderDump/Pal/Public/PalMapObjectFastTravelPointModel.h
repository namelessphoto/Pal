#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectFastTravelPointModel.generated.h"

UCLASS()
class UPalMapObjectFastTravelPointModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid LocationInstanceId;
    
public:
    UPalMapObjectFastTravelPointModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

