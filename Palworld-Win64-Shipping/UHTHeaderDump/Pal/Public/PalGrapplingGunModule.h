#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalGrapplingGunState.h"
#include "PalGrapplingGunInitParameter.h"
#include "PalGrapplingGunModule.generated.h"

class APalCharacter;
class UPalActionBase;

UCLASS(Blueprintable)
class PAL_API UPalGrapplingGunModule : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APalCharacter* ActionCharacter;
    
    UPROPERTY()
    float CableShootSpeed;
    
    UPROPERTY()
    float CableReturnSpeed;
    
    UPROPERTY()
    float CableMaxLength;
    
    UPROPERTY()
    float CharacterMoveSpeed;
    
    UPROPERTY()
    float NearCoolTimeDistance;
    
    UPROPERTY()
    float NearCoolTimeRate;
    
    UPROPERTY(BlueprintReadOnly)
    FVector GrappleLocation;
    
    UPROPERTY(BlueprintReadOnly)
    EPalGrapplingGunState GrapplingGunState;
    
public:
    UPalGrapplingGunModule();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickModule(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ShowLine();
    
    UFUNCTION(BlueprintCallable)
    void ShotCable();
    
    UFUNCTION(BlueprintCallable)
    void OnStartGrapplingAction(const FVector& HitLocation);
    
private:
    UFUNCTION()
    void OnStartAction(const UPalActionBase* action);
    
    UFUNCTION()
    void OnEndGrapplingAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDetachWeapon();
    
    UFUNCTION(BlueprintCallable)
    void OnAttachWeapon();
    
    UFUNCTION(BlueprintPure)
    bool IsGrapplingAction() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FPalGrapplingGunInitParameter& Parameter);
    
    UFUNCTION(BlueprintPure)
    bool CanHitGrapplingTarget() const;
    
};

