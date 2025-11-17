#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalFishingRodState.h"
#include "PalFishingRodInitParameter.h"
#include "PalFishingRodModule.generated.h"

class APalCharacter;
class APalFishShadow;
class APalFishingSpotArea;
class UPalActionBase;

UCLASS(BlueprintType)
class PAL_API UPalFishingRodModule : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPickFishDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDecreaseDurabilityDelegate, float, DecreaseValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTargetSpotDelegate, APalFishingSpotArea*, TargetSpot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeRodStateDelegate, EPalFishingRodState, RodState);
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeRodStateDelegate OnChangeRodStateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnDecreaseDurabilityDelegate OnDecreaseDurabilityDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeTargetSpotDelegate OnChangeTargetSpotDelegate;
    
protected:
    UPROPERTY(Transient)
    APalCharacter* ActionCharacter;
    
    UPROPERTY(BlueprintReadOnly)
    FVector FishingFloatLocation;
    
    UPROPERTY(BlueprintReadOnly)
    EPalFishingRodState FishingRodState;
    
private:
    UPROPERTY(Transient)
    APalFishingSpotArea* TargetSpot;
    
    UPROPERTY(Transient)
    APalFishShadow* PreTargetFishShadow;
    
    UPROPERTY(Transient)
    APalFishShadow* TargetFishShadow;
    
public:
    UPalFishingRodModule();

    UFUNCTION(BlueprintCallable)
    void TickModule(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ShotCable();
    
    UFUNCTION(BlueprintCallable)
    void SetFloatLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnStartWaitPick();
    
    UFUNCTION(BlueprintCallable)
    void OnStartFishingAction();
    
    UFUNCTION(BlueprintCallable)
    void OnStartAim();
    
private:
    UFUNCTION()
    void OnStartAction(const UPalActionBase* action);
    
    UFUNCTION()
    void OnPickStart();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndFishingAction();
    
    UFUNCTION(BlueprintCallable)
    void OnEndAim();
    
private:
    UFUNCTION()
    void OnEndAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDetachWeapon();
    
    UFUNCTION(BlueprintCallable)
    void OnAttachWeapon();
    
    UFUNCTION(BlueprintPure)
    bool IsFishingAction() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FPalFishingRodInitParameter& Parameter, APalCharacter* InActionCharacter);
    
    UFUNCTION(BlueprintPure)
    APalFishShadow* GetTargetFishShadow() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFloatLocation() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DebugShowLine();
    
public:
    UFUNCTION(BlueprintPure)
    bool CanHitFishingTarget();
    
    UFUNCTION(BlueprintCallable)
    void CancelFishing();
    
};

