#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalAIResponseType.h"
#include "FlagContainer.h"
#include "PalDeadInfo.h"
#include "Templates/SubclassOf.h"
#include "PalAISensorComponent.generated.h"

class AActor;
class APalCharacter;
class UPalAIResponsePreset;
class UPalAISightResponse;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalAISensorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceiveSoundDelegate, FVector, EmitLocation);
    
private:
    UPROPERTY(Transient)
    AActor* SelfPawn;
    
    UPROPERTY(Transient)
    float SightAngleThreshold;
    
    UPROPERTY(Transient)
    float SightDistance;
    
    UPROPERTY(Transient)
    float HearingRate;
    
    UPROPERTY(Transient)
    bool HumanAndNoneWeapon;
    
    UPROPERTY(Transient)
    bool IsIgnoreSoundReaction;
    
    UPROPERTY(Transient)
    float RecentMaxSoundLevel;
    
    UPROPERTY(Transient)
    int32 ResponsedMaxBiologicalGrade;
    
    UPROPERTY(Transient)
    UPalAIResponsePreset* AIResponsePreset;
    
    UPROPERTY(Transient)
    UPalAISightResponse* AISightResponse;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer DisableSightFlag;
    
public:
    UPROPERTY(BlueprintAssignable)
    FReceiveSoundDelegate OnFReceiveSoundDelegate;
    
    UPalAISensorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SightCheckAllPlayer(TArray<APalCharacter*>& InSightPlayers, float RangeRate);
    
    UFUNCTION(BlueprintCallable)
    void SightCheckAllEdibleDeadNPC(TArray<APalCharacter*>& InSightCharacters);
    
    UFUNCTION(BlueprintCallable)
    void SightCheckAllAliveNPC(TArray<APalCharacter*>& InSightCharacters, bool ignoreOtomo);
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSightFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableEscape();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAIResponse(TSubclassOf<UPalAIResponsePreset> PresetClass);
    
    UFUNCTION(BlueprintCallable)
    EPalAIResponseType SelectResponseBySenses(EPalAIResponseType CurrentBehavior, const TArray<APalCharacter*>& FindCharacters, bool IsDamaged, APalCharacter*& OutTargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ResetResponsedMaxBiologicalGrade();
    
private:
    UFUNCTION()
    void ReceiveSound(int32 SoundRadius, FVector EmitLocation, AActor* Emitter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnResponseSpecialLookat();
    
    UFUNCTION(BlueprintCallable)
    bool IsInSightKillerAndDeadBody(AActor* Killer, AActor* DeadBody);
    
    UFUNCTION(BlueprintCallable)
    void EnableHearing();
    
    UFUNCTION(BlueprintCallable)
    void DisableHearing();
    
private:
    UFUNCTION()
    void DeadAutoRemoveDelegate(FPalDeadInfo DeadInfo);
    
};

