#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalHeadUpDisplayComponent.generated.h"

class APalCharacter;
class UPalCharacterParameterComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalHeadUpDisplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float HeadUpOffset;
    
public:
    UPalHeadUpDisplayComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void UpdateInvaderHUD();
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowInvaderHUD();
    
private:
    UFUNCTION()
    void OnUpdatePossessItem(UPalCharacterParameterComponent* Parameter);
    
    UFUNCTION()
    void OnUpdateOwnerCharacterGroupId(const FGuid& GroupId);
    
    UFUNCTION()
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
};

