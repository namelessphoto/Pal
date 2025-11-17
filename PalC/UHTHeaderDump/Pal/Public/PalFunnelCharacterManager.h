#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalFunnelCharacterManagementInfo.h"
#include "PalInstanceID.h"
#include "PalWorldSubsystem.h"
#include "PalFunnelCharacterManager.generated.h"

class AActor;
class APalCharacter;
class APalFunnelCharacter;

UCLASS(Blueprintable)
class PAL_API UPalFunnelCharacterManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FGuid, FPalFunnelCharacterManagementInfo> ManagedCharacterInfo;
    
    UPROPERTY()
    TMap<FGuid, FPalInstanceID> PickupTarget;
    
public:
    UPalFunnelCharacterManager();

private:
    UFUNCTION()
    void SpawnActorCallback(const FGuid& Guid, AActor* Actor);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetFunnelCharacterActive(APalFunnelCharacter* FunnelCharacter, bool IsActive, bool bNoEffect);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeForServer_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize_BP();
    
    UFUNCTION()
    APalCharacter* GetOwnerCharacter(const APalFunnelCharacter* FunnelCharacter) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetIndexOfFunnelsWithinSameTrainer(APalFunnelCharacter* FunnelCharacter) const;
    
};

