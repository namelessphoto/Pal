#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInstanceID.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "Templates/SubclassOf.h"
#include "PalCapturedCage.generated.h"

class APalAIController;
class APalCapturedCage;
class APalCharacter;
class APalPlayerCharacter;
class UPalIndividualCharacterHandle;

UCLASS()
class PAL_API APalCapturedCage : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, APalCapturedCage*, Self);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FName FieldKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalAIController> ControllerClass;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnRange;
    
    UPROPERTY(EditDefaultsOnly)
    float DespawnRange;
    
    UPROPERTY(BlueprintReadOnly)
    FName SpawnedPalId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SpawnedPalLevel;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bIsDoorOpened;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsEnemyCamp;
    
private:
    UPROPERTY(Transient)
    bool IsInSpawnedRange;
    
    UPROPERTY(Transient)
    bool bDisabledLottery;
    
    UPROPERTY(Transient)
    UPalIndividualCharacterHandle* SpawnedPalHandle;
    
public:
    APalCapturedCage(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StartCaptureEffect_ServerBP(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPal(FName InPalID, int32 InPalLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideKeyName(FName Key);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorOpened(bool bIsOpend);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetCageByOutside_BP();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ResetCage_ToAll();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void OpenDoor_ToAll();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenDoor_BP(bool bIsAnimSkip);
    
private:
    UFUNCTION()
    void OnCreateHandle(FPalInstanceID ID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LotteryAndSpawnPal();
    
    UFUNCTION(BlueprintCallable)
    APalCharacter* GetSpawnedPal();
    
    UFUNCTION(BlueprintImplementableEvent)
    EPalInteractiveObjectIndicatorType GetIndicatorType() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FName GetCampSpawnerName() const;
    
    UFUNCTION(BlueprintCallable)
    void CapturePal_ServerInternal(APalPlayerCharacter* Player);
    

    // Fix for true pure virtual functions not being implemented
};

