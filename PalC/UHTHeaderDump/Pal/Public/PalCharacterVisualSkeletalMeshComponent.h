#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EPalGeneralMontageType.h"
#include "PalSkeletalMeshComponent.h"
#include "PalCharacterVisualSkeletalMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalCharacterVisualSkeletalMeshComponent : public UPalSkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName CharacterID;
    
public:
    UPalCharacterVisualSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCharacterWithPlayWalk(const FName InCharacterId, const float MaxMoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterWithPlayGeneralMontage(const FName InCharacterId, const EPalGeneralMontageType GeneralMontageType, const bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCharacter(const FName InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void SetRelativeTransformWithDefaultOffset(const FTransform& InTransform);
    
    UFUNCTION(BlueprintPure)
    float GetMoveSpeed() const;
    
};

