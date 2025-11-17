#pragma once
#include "CoreMinimal.h"
#include "PalFastStageModelRepInfoArray.h"
#include "PalGameStateReplicatorBase.h"
#include "PalStageReplicator.generated.h"

UCLASS()
class PAL_API UPalStageReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalFastStageModelRepInfoArray RepInfoArray;
    
public:
    UPalStageReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

