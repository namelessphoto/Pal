#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.h"
#include "PalDungeonInstanceModel.h"
#include "PalDungeonInstanceModelFixedDungeon.generated.h"

UCLASS()
class PAL_API UPalDungeonInstanceModelFixedDungeon : public UPalDungeonInstanceModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGameDateTime RespawnBossTimeAt;
    
public:
    UPalDungeonInstanceModelFixedDungeon();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    FGameDateTime GetRespawnBossTimeAt() const;
    
};

