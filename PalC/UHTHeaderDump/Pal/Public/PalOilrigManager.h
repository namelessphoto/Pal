#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "EPalOilrigCombatHeliWeaponType.h"
#include "EPalOilrigType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalOilrigCombatHeliRandomWeaponInfo.h"
#include "PalOilrigSaveStatus.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalOilrigManager.generated.h"

class AActor;
class APalCharacter;
class APalOilrigController;
class IPalOilrigHandledActorInterface;
class UPalOilrigHandledActorInterface;
class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class PAL_API UPalOilrigManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOpenCrateDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnOpenCrateDelegate OnOpenCrateDelegate;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalOilrigType, TSubclassOf<APalOilrigController>> OilrigControllerClassMap;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalOilrigType, FVector> OilrigLocationMap;
    
    UPROPERTY(EditDefaultsOnly)
    float ClearedOilrigResetTimeSecond;
    
    UPROPERTY(EditDefaultsOnly)
    float MachineStartTimeSecond_ByAlarm;
    
    UPROPERTY(EditDefaultsOnly)
    float ClearCountUpDistance;
    
private:
    UPROPERTY(Transient)
    TArray<APalOilrigController*> ControllerList;
    
    UPROPERTY(Transient)
    TMap<EPalOilrigType, FPalOilrigSaveStatus> OilrigSaveMap;
    
    UPROPERTY(Transient)
    TArray<TScriptInterface<IPalOilrigHandledActorInterface>> HandledActorList;
    
    UPROPERTY(Transient)
    FGuid GroupGuid;
    
    UPROPERTY(Transient)
    TArray<FGuid> FixedWeaponDestroyedSaveData;
    
public:
    UPalOilrigManager();

private:
    UFUNCTION()
    void OnEndPlayNPC(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable)
    APalOilrigController* FindOilrigController(EPalOilrigType KeyName);
    
    UFUNCTION(BlueprintCallable)
    APalOilrigController* FindNearestOilrigController(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    EPalOilrigCombatHeliWeaponType FindCombatHeliRandomWeza(TArray<FPalOilrigCombatHeliRandomWeaponInfo> InfoList);
    
    UFUNCTION(BlueprintCallable)
    AActor* FindCombatHeliAimTarget(APalCharacter* HeliActor, float Range, FVector OilrigCenter);
    
    UFUNCTION(BlueprintCallable)
    void AddNPCToGroup(UPalIndividualCharacterHandle* Handle);
    

    // Fix for true pure virtual functions not being implemented
};

