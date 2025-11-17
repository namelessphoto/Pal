#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalRandomIncidentSpawnerAreaType.h"
#include "PalIncidentBase.h"
#include "PalRandomIncidentSpawnMonsterData.h"
#include "PalRandomIncidentBase.generated.h"

class APalRandomIncidentNPCSpawner;
class UDataTable;

UCLASS()
class PAL_API UPalRandomIncidentBase : public UPalIncidentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExitAnyArea, EPalRandomIncidentSpawnerAreaType, AreaType, int32, PlayerId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnterAnyArea, EPalRandomIncidentSpawnerAreaType, AreaType, int32, PlayerId);
    
    UPROPERTY(BlueprintAssignable)
    FOnEnterAnyArea OnEnterAnyArea;
    
    UPROPERTY(BlueprintAssignable)
    FOnExitAnyArea OnExitAnyArea;
    
private:
    UPROPERTY(EditAnywhere)
    bool bIsFinishWithIncidentSpawner;
    
    UPROPERTY(VisibleAnywhere)
    EPalRandomIncidentSpawnerAreaType PrevEnterArea;
    
public:
    UPalRandomIncidentBase();

    UFUNCTION(BlueprintCallable)
    void SetDisableFlagForNPCSpawner(const FVector& Center, float Radius, const FName& Name, bool isDisable);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsOutbreakTable(const UDataTable* Table);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFinishWithIncidentSpawner() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlayerId() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    APalRandomIncidentNPCSpawner* GetNPCSpawner();
    
    UFUNCTION(BlueprintCallable)
    void CreateSpawnMonsterDataListFromOutbreakRow(const UDataTable* Table, UPARAM(Ref) TArray<FPalRandomIncidentSpawnMonsterData>& OutMonsterList, UPARAM(Ref) TArray<FName>& Names);
    
private:
    UFUNCTION()
    void BroadcastOnEnterAreaAndOnExitArea(int32 PlayerId);
    
};

