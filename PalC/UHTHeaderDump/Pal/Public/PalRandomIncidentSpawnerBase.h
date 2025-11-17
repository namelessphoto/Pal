#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalRandomIncidentSpawnerAreaType.h"
#include "EPalRandomIncidentSpawnerStatus.h"
#include "PalRandomIncidentWalkPathReferenceData.h"
#include "Templates/SubclassOf.h"
#include "PalRandomIncidentSpawnerBase.generated.h"

class ACharacter;
class APalPlayerCharacter;
class UPalIncidentBase;
class UPalIncidentDynamicParameterRandom;
class UPalRandomIncidentLotteryBase;

UCLASS()
class PAL_API APalRandomIncidentSpawnerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TMap<FName, FPalRandomIncidentWalkPathReferenceData> WalkPointRefarences;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UPalRandomIncidentLotteryBase> LotteryClass;
    
    UPROPERTY(EditAnywhere)
    float CoolDownTimeMinute;
    
    UPROPERTY(VisibleAnywhere)
    double CoolDownTimeSecRemain;
    
    UPROPERTY(VisibleAnywhere)
    TMap<EPalRandomIncidentSpawnerAreaType, float> AreaRadius;
    
    UPROPERTY(VisibleAnywhere)
    int32 PlayerId;
    
    UPROPERTY(VisibleAnywhere)
    UPalIncidentBase* ExecIncident;
    
    UPROPERTY(VisibleAnywhere)
    EPalRandomIncidentSpawnerStatus Status;
    
    UPROPERTY(VisibleAnywhere)
    UPalIncidentDynamicParameterRandom* Parameter;
    
    UPROPERTY(VisibleAnywhere)
    UPalRandomIncidentLotteryBase* Lottery;
    
public:
    APalRandomIncidentSpawnerBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void UpdateStatusWaitPlayerOutside(float DeltaTime);
    
    UFUNCTION()
    void UpdateStatusIdle(float DeltaTime);
    
    UFUNCTION()
    void UpdateStatusExecuting(float DeltaTime);
    
    UFUNCTION()
    void UpdateStatusCoolDown(float DeltaTime);
    
    UFUNCTION()
    void StartCoolDown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetStatus(EPalRandomIncidentSpawnerStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaRadius(EPalRandomIncidentSpawnerAreaType AreaType, float Radius);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIncidentSpawned(UPalIncidentBase* Incident, UPalIncidentDynamicParameterRandom* DynamicParameter);
    
public:
    UFUNCTION()
    bool IsInsideArea(EPalRandomIncidentSpawnerAreaType Area, const ACharacter* pPlayer) const;
    
    UFUNCTION(BlueprintPure)
    TMap<EPalRandomIncidentSpawnerAreaType, float> GetAreaRadiusAll() const;
    
    UFUNCTION(BlueprintPure)
    float GetAreaRadius(EPalRandomIncidentSpawnerAreaType AreaType) const;
    
private:
    UFUNCTION()
    APalPlayerCharacter* FindPlayerInsideArea(EPalRandomIncidentSpawnerAreaType AreaType);
    
    UFUNCTION()
    void EndIncident();
    
    UFUNCTION()
    void DestroyUnuseActors(TArray<AActor*>& OutList);
    
    UFUNCTION()
    void CreateWalkPathList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CollectWalkPoints(const TArray<AActor*>& WalkPoints);
    
private:
    UFUNCTION()
    void CollectChildActors(TArray<AActor*>& OutList);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddWalkPath(const FName& PathName, const TArray<AActor*>& PointList);
    
};

