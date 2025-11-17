#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FlagContainer.h"
#include "PalBackWeaponBase.generated.h"

class UMaterialInterface;
class UPalDynamicWeaponItemDataBase;
class UPalStaticWeaponItemData;
class USceneComponent;

UCLASS()
class PAL_API APalBackWeaponBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool InFirstOrSecondSlot;
    
    UPROPERTY(Transient)
    bool IsEquipHand;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer HiddenBackWeapon;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> OriginalMaterials;
    
    UPROPERTY(Transient)
    UPalStaticWeaponItemData* ownWeaponStaticData;
    
    UPROPERTY(Transient)
    UPalDynamicWeaponItemDataBase* ownWeaponDynamicData;
    
public:
    APalBackWeaponBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnActiveModel(bool IsActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetMainMesh();
    
    UFUNCTION(BlueprintPure)
    float GetDurability() const;
    
};

