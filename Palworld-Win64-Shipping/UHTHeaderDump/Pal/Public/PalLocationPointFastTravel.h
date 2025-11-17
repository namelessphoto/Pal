#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalLocationPointStatic.h"
#include "PalLocationPointFastTravel.generated.h"

UCLASS()
class UPalLocationPointFastTravel : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid LocationId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool ShouldUnlockFlag;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FName FastTravelPointID;
    
public:
    UPalLocationPointFastTravel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

