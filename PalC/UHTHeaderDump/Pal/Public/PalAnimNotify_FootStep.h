#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EPalFootType.h"
#include "EPalLandingType.h"
#include "PalAnimNotify_FootStep.generated.h"

class AActor;
class UNiagaraSystem;
class UPalFootStepEffectAssetBase;
class UPalStaticCharacterParameterComponent;

UCLASS(CollapseCategories)
class UPalAnimNotify_FootStep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UPalFootStepEffectAssetBase> DefaultEffectAssetClass;
    
private:
    UPROPERTY()
    UPalFootStepEffectAssetBase* EffectAssetCache;
    
public:
    UPalAnimNotify_FootStep();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnFootStepEffect(AActor* Owner, EPalLandingType LandingType, TEnumAsByte<EPhysicalSurface> PhysicalSurface, const FVector& Location, const FRotator& Rotation, UPalStaticCharacterParameterComponent* StaticParam, const float Scale, UNiagaraSystem* OverrideEffect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnFootStepDecal(AActor* Owner, TEnumAsByte<EPhysicalSurface> PhysicalSurface, EPalFootType FootType, FVector Location, FVector CurrentNormal, float LifeSpan, float FadeTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetFloorPosition(AActor* Owner, FTransform FootTransform, FHitResult& HitResult) const;
    
};

