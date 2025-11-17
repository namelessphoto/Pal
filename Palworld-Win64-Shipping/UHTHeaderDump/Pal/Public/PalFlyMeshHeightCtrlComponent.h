#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalFlyHeightType.h"
#include "FixedPoint64.h"
#include "PalDeadInfo.h"
#include "PalFlyMeshHeightCtrlComponent.generated.h"

class APalCharacter;
class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFlyMeshHeightCtrlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlingAdditionalHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HighFlingAddtionalHeight;
    
protected:
    UPROPERTY(Transient)
    EPalFlyHeightType State;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_bIsHighFling)
    bool bIsHighFling;
    
    UPROPERTY(Transient)
    bool bIsHighFlingCache;
    
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* SK;
    
public:
    UPalFlyMeshHeightCtrlComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ToLand_All(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ToLand(float Duration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ToFly_All(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ToFly(float Duration);
    
private:
    UFUNCTION()
    void SetupMesh();
    
    UFUNCTION()
    void OnUpdatePlayerHp(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    
    UFUNCTION()
    void OnRep_bIsHighFling();
    
    UFUNCTION()
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
    UFUNCTION()
    void OnDead(FPalDeadInfo Info);
    
    UFUNCTION()
    void OnChangeBattleMode(bool bIsBattleMode);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFlying() const;
    
private:
    UFUNCTION()
    void HighFlingEnd_Server();
    
    UFUNCTION()
    void HighFlingEnd_Implementation();
    
    UFUNCTION(NetMulticast, Reliable)
    void HighFlingEnd();
    
public:
    UFUNCTION(BlueprintPure)
    float GetDefaultMeshLocationZ();
    
private:
    UFUNCTION(BlueprintCallable)
    void Debug_ForceHighFlingEnd();
    
};

