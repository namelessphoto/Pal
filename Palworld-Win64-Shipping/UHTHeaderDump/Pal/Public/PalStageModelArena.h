#pragma once
#include "CoreMinimal.h"
#include "PalStageModelBase.h"
#include "PalStageModelArena.generated.h"

class UPalArenaInstanceModel;

UCLASS()
class PAL_API UPalStageModelArena : public UPalStageModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalArenaInstanceModel* InstanceModel;
    
public:
    UPalStageModelArena();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    UPalArenaInstanceModel* GetInstanceModel() const;
    
};

