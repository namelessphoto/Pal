#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "PalSoundPlayerInEditorComponent.generated.h"

class UPalSoundSlot;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalSoundPlayerInEditorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UPalSoundSlot> PalSoundSlotClass;
    
private:
    UPROPERTY(Transient)
    UPalSoundSlot* PalSoundSlotCache;
    
public:
    UPalSoundPlayerInEditorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPhysicalMaterial(TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    
};

