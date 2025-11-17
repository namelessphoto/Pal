#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalAICombatModule.h"
#include "PalAICombatModule_RaidBoss.generated.h"

class AActor;
class APalMapObject;
class UPalBaseCampModel;

UCLASS()
class PAL_API UPalAICombatModule_RaidBoss : public UPalAICombatModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APalMapObject* TargetBaseCampActor;
    
    UPROPERTY(Transient)
    FGuid TargetBaseCampID;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UPalBaseCampModel> TargetCamp;
    
public:
    UPalAICombatModule_RaidBoss();

    UFUNCTION(BlueprintCallable)
    void Setup_ForBP(FGuid CampID);
    
    UFUNCTION()
    void OnBattleFinish_forDelegate(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool JudgeReturnCombatStartPosition();
    
    UFUNCTION(BlueprintPure)
    AActor* GetBaseCampActor();
    
    UFUNCTION(BlueprintCallable)
    AActor* FindPlayerTarget();
    
    UFUNCTION(BlueprintCallable)
    AActor* FindNearTarget();
    
};

