#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Templates/SubclassOf.h"
#include "PalCutsceneComponent.generated.h"

class AActor;
class APalCutsceneActor;
class UPalHUDDispatchParameter_FadeWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCutsceneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCutsceneFinishDelegate, bool, bIsSkipped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCutsceneDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FCutsceneDelegate OnPlayCutsceneDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCutsceneFinishDelegate OnFinishCutsceneDelegate;
    
private:
    UPROPERTY()
    APalCutsceneActor* CutsceneActor;
    
    UPROPERTY()
    UPalHUDDispatchParameter_FadeWidget* FadeParam;
    
public:
    UPalCutsceneComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void StopCutsceneToServer();
    
    UFUNCTION(BlueprintCallable)
    void StopCutscene();
    
private:
    UFUNCTION()
    void StartFadeIn();
    
public:
    UFUNCTION(BlueprintCallable)
    APalCutsceneActor* SpawnCutsceneActor(TSubclassOf<APalCutsceneActor> CutsceneActorClass, FVector Location, FRotator Rotation, AActor* Owner);
    
    UFUNCTION(Reliable, Server)
    void PlayCutsceneToServer();
    
    UFUNCTION(BlueprintCallable)
    void PlayCutscene(APalCutsceneActor* InCutsceneActor, bool IsAutoDestroy);
    
private:
    UFUNCTION()
    void OnFinished();
    
    UFUNCTION()
    void OnEndFadeIn();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayingCutscene() const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainingSeconds() const;
    
};

