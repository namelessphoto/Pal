#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelInstance -FallbackName=LevelInstance
#include "EPalArenaPlayerIndex.h"
#include "PalArenaBattleFormation.h"
#include "PalArenaResultFormation.h"
#include "PalArenaLevelInstance.generated.h"

class UShapeComponent;

UCLASS()
class PAL_API APalArenaLevelInstance : public ALevelInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float BattleAreaRadius;
    
public:
    APalArenaLevelInstance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector GetReturnLocation() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FPalArenaResultFormation GetResultFormation() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FTransform GetPlayerStartTransform() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetOutAreaVolume(TArray<UShapeComponent*>& OutAreaVolume);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetFloorZ() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetCeilingZ() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FPalArenaBattleFormation GetBattleFormation(EPalArenaPlayerIndex ArenaPlayerIndex) const;
    
    UFUNCTION()
    float GetBattleAreaRadius() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector GetBattleAreaCenter() const;
    
private:
    UFUNCTION()
    void CheckLevelLoad_ServerInternal();
    
};

