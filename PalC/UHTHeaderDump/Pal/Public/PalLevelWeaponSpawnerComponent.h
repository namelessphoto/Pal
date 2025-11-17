#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Templates/SubclassOf.h"
#include "PalLevelWeaponSpawnerComponent.generated.h"

class AActor;
class APalAntiAirMissileLauncher;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalLevelWeaponSpawnerComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalAntiAirMissileLauncher> LauncherClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> LauncherClass_Destroyed;
    
    UPROPERTY(EditDefaultsOnly)
    bool AutoSpawnByBeginPlay;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FGuid InstanceId;
    
    UPROPERTY(Transient)
    AActor* SpawnedWeapon;
    
public:
    UPalLevelWeaponSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnWeapon();
    
    UFUNCTION(BlueprintCallable)
    void SetGuidByOutside(FGuid ID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetInstanceId();
    
private:
    UFUNCTION()
    void OnDestroyedWeapon();
    
public:
    UFUNCTION(BlueprintPure)
    FGuid GetGuid();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DebugPrintSpawn_BP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugPrintDespawn_BP();
    
};

