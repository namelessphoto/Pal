#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "PalDeadInfo.h"
#include "PalBaseCampEnemyObserver.generated.h"

class AActor;
class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class UPalBaseCampEnemyObserver : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBaseCampEnemyDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FBaseCampEnemyDelegate OnFirstAppearEnemyDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FBaseCampEnemyDelegate OnEmptyEnemyDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FBaseCampEnemyDelegate OnPassedTimeAfterEmptyEnemyDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid BaseCampId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalIndividualCharacterHandle*> EnemyList;
    
    UPROPERTY(Transient)
    float CampAreaRange;
    
    UPROPERTY(Transient)
    FVector CampLocation;
    
public:
    UPalBaseCampEnemyObserver();

private:
    UFUNCTION()
    void OnEndPlayEnemy(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
    
    UFUNCTION()
    void OnDeadEnemy(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBattleMode() const;
    
};

