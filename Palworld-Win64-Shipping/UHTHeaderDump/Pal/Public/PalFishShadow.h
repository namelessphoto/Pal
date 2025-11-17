#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalFishBattleBehaviorType.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalFishShadow.generated.h"

class UNiagaraSystem;

UCLASS()
class PAL_API APalFishShadow : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReachedPickLocationDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnReachedPickLocationDelegate OnReachedPickLocationDelegate;
    
private:
    UPROPERTY(Transient)
    FPalIndividualCharacterSaveParameter CharacterSaveParameter;
    
    UPROPERTY(Transient)
    FGuid RequestPlayerUId;
    
public:
    APalFishShadow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedRareEffect(UNiagaraSystem* Effect);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSearchHit(const FVector& PickLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnReachedPickLocation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFishingStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEscape();
    
    UFUNCTION(BlueprintPure)
    float GetMoveSpeedPerSec() const;
    
    UFUNCTION(BlueprintPure)
    float GetFishShadowSizeScale() const;
    
    UFUNCTION(BlueprintPure)
    EPalFishBattleBehaviorType GetBehaviorType() const;
    
};

