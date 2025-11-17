#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectDisplayCharacterModel.generated.h"

class AController;
class UPalIndividualCharacterSlot;
class UPalIndividualCharacterSlotsObserver;
class UPalUserWidgetOverlayUI;

UCLASS()
class PAL_API UPalMapObjectDisplayCharacterModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    float RecoverAmountBySec;
    
    UPROPERTY()
    FTransform CharacterSpawnLocalTransform;
    
    UPROPERTY()
    TSubclassOf<AController> ControllerClass;
    
    UPROPERTY(EditDefaultsOnly, Replicated)
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
    UPROPERTY()
    UPalIndividualCharacterSlotsObserver* CharacterSlotsObserver;
    
public:
    UPalMapObjectDisplayCharacterModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryMoveToDisplayCage(UPalIndividualCharacterSlot* fromSlot);
    
private:
    UFUNCTION()
    void OnUpdateCharacterContainer_ServerInternal();
    
    UFUNCTION()
    void OnSpawnedPhantomCharacter_ServerInternal(FPalInstanceID IndividualId, const int32 PhantomId);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetDisplaySlots(TArray<UPalIndividualCharacterSlot*>& Slots);
    
};

