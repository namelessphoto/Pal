#pragma once
#include "CoreMinimal.h"
#include "PalLocationPointStatic.h"
#include "PalLocationPoint_BossTower.generated.h"

class APalBossTower;

UCLASS()
class PAL_API UPalLocationPoint_BossTower : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    APalBossTower* BossTower;
    
public:
    UPalLocationPoint_BossTower();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    APalBossTower* GetBossTower() const;
    
};

