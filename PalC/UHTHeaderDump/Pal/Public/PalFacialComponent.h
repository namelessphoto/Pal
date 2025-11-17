#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalFacialEyeType.h"
#include "EPalFacialMouthType.h"
#include "PalFacialComponent.generated.h"

class UAnimMontage;
class UCurveFloat;
class UPalFacial_MainModule;
class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFacialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnableEyeBlink;
    
    UPROPERTY(EditDefaultsOnly)
    float NPCTalkMouthChangeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* NPCTalkMouthWeightCurve;
    
private:
    UPROPERTY(Transient)
    UPalFacial_MainModule* MainModule;
    
public:
    UPalFacialComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopNPCTalkMouth();
    
    UFUNCTION(BlueprintCallable)
    void StartNPCTalkMouth();
    
    UFUNCTION(BlueprintCallable)
    void SetUpTestMesh(USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableNotify(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLayer(EPalFacialEyeType Eye);
    
private:
    UFUNCTION()
    void NPCTalkMouthLoop();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ExistFacialNotifyInMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    bool ExistEyeNotifyInMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMouth_ForMontageNotify(EPalFacialMouthType Mouth);
    
    UFUNCTION(BlueprintCallable)
    void ChangeEyeAndMouthMesh(EPalFacialEyeType Eye);
    
    UFUNCTION(BlueprintCallable)
    void ChangeEye_ForMontageNotify(EPalFacialEyeType Eye);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDefaultFacial();
    
private:
    UFUNCTION(BlueprintCallable)
    void Blink();
    
};

