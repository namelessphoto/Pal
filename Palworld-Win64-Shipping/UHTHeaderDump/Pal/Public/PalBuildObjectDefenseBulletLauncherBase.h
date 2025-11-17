#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalBuildObjectDefenseBase.h"
#include "PalBuildObjectDefenseBulletLauncherBase.generated.h"

class AActor;
class APalCharacter;
class APalStationaryWeaponBulletLauncherBase;
class UPalMapObjectBulletLauncherParameterComponent;

UCLASS()
class PAL_API APalBuildObjectDefenseBulletLauncherBase : public APalBuildObjectDefenseBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UPalMapObjectBulletLauncherParameterComponent* BulletLauncherParameterComponent;
    
public:
    APalBuildObjectDefenseBulletLauncherBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void TurnToTarget_BPImpl(const AActor* TargetActor, float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupFooting(const APalCharacter* OwnerCharacter, FVector CharacterLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOwnerCharacter(const APalCharacter* OwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTrigger(bool EnableTrigger);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    APalStationaryWeaponBulletLauncherBase* GetWeaponBulletLauncher() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector GetMuzzleLocation() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector GetMuzzleForwardVector() const;
    
    UFUNCTION(BlueprintPure)
    void GetCharacterLocationWithOffset(APalCharacter* OwnerCharacter, FVector& OutLocation);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DebugDraw_TurnToTarget_BPImpl();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetEnableTrigger(bool EnableTrigger);
    
};

