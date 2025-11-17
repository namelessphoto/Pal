#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInflictDamageNotifyInterface.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalItemSlotId.h"
#include "PalNPC.h"
#include "PalMonsterCharacter.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UMaterialInterface;
class UPalCharacterLiftupObjectComponent;
class UPalHUDDispatchParameterBase;
class USkeletalMeshComponent;

UCLASS()
class PAL_API APalMonsterCharacter : public APalNPC, public IPalInteractiveObjectIndicatorInterface, public IPalInflictDamageNotifyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractiveObj;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleInstanceOnly)
    UPalCharacterLiftupObjectComponent* LiftupObjectComponent;
    
private:
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> OriginalMaterials;
    
public:
    APalMonsterCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void SelectedFeedingItem(const FPalItemSlotId& itemSlotId, const int32 Num);
    
public:
    UFUNCTION()
    void RefreshSkin(bool bIsActive);
    
private:
    UFUNCTION()
    void OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnSelectedOrderWorkerRadialMenu(UPalHUDDispatchParameterBase* Parameter);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLiftupObject() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetRideNPCMesh() const;
    

    // Fix for true pure virtual functions not being implemented
};

