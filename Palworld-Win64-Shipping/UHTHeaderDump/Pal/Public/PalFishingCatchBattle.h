#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalFishingCatchBattleInfo.h"
#include "PalFishingCatchBattle.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class PAL_API UPalFishingCatchBattle : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuccessFightDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuccessCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMissCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFailedFightDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnSuccessCatchBattleDelegate OnSuccessCatchBattleDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMissCatchBattleDelegate OnFailedCatchBattleDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSuccessFightDelegate OnSuccessFightDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFailedFightDelegate OnFailedFightDelegate;
    
private:
    UPROPERTY(Transient)
    APalCharacter* ActionCharacter;
    
public:
    UPalFishingCatchBattle();

    UFUNCTION(BlueprintNativeEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetFishPosX(float PosX);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitialized(const FPalFishingCatchBattleInfo& Info);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsStarted();
    
public:
    UFUNCTION(BlueprintPure)
    float GetCurrentFishPosX() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentCatchAmount() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentBarPosX() const;
    
    UFUNCTION(BlueprintPure)
    float GetBarSize();
    
};

