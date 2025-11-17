#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectItemStorageModel.h"
#include "PalMapObjectSupplyStorageModel.generated.h"

UCLASS()
class PAL_API UPalMapObjectSupplyStorageModel : public UPalMapObjectItemStorageModel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid LocationId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FDateTime CreatedAtRealTime;
    
public:
    UPalMapObjectSupplyStorageModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

