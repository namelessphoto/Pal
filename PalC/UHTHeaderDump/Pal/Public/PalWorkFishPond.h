#pragma once
#include "CoreMinimal.h"
#include "PalWorkProgress.h"
#include "PalWorkFishPond.generated.h"

UCLASS()
class PAL_API UPalWorkFishPond : public UPalWorkProgress {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<int32> CraftSpeeds;
    
public:
    UPalWorkFishPond();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

