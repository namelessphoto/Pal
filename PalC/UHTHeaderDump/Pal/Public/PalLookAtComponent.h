#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FlagContainer.h"
#include "PalLookAtComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalLookAtComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly, Replicated, Transient)
    FVector LookAtTargetLocation;
    
    UPROPERTY(EditInstanceOnly, Transient)
    FVector LookAtTargetLocation_forActor;
    
    UPROPERTY(EditInstanceOnly, Replicated, Transient)
    AActor* LookAtTargetActor;
    
    UPROPERTY(Transient)
    FVector LookAtTargetLocation_Interpolated;
    
    UPROPERTY(EditInstanceOnly, Transient)
    FName LookAtTargetBoneName;
    
    UPROPERTY(EditInstanceOnly, Transient)
    float LookAtInInterpTime;
    
    UPROPERTY(EditInstanceOnly, Transient)
    float LookAtOutInterpTime;
    
    UPROPERTY(EditInstanceOnly, Replicated, Transient)
    bool bIsEnableLookAt;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer LookAtDisableFlag;
    
    UPROPERTY(EditDefaultsOnly)
    float InterpolatedSpeed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient)
    bool bIsShowDebugImage;
    
    UPalLookAtComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopLookAt(float interpTime);
    
    UFUNCTION(BlueprintCallable)
    void StartLookAtForActor(AActor* Actor, FName BoneName, float interpTime);
    
    UFUNCTION(BlueprintCallable)
    void StartLookAt(FVector LookAtTarget, float interpTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtDisable(FName flagName, bool bIsDisable);
    
private:
    UFUNCTION()
    void OnChangeShootState(bool IsAim, bool IsShooting);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEnableLookAt() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetLookAtTargetActor() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtTarget() const;
    
    UFUNCTION(BlueprintPure)
    float GetLookAtOutInterpTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetLookAtInInterpTime() const;
    
};

