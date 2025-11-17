#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalSoundPlayerComponent.generated.h"

class UPalSoundSlot;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalSoundPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal(USceneComponent*, FOnGetAkOwnerComponent);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UPalSoundSlot> PalSoundSlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOnGetAkOwnerComponent OnGetAkOwnerComponent;
    
private:
    UPROPERTY(Transient)
    UPalSoundSlot* PalSoundSlotCache;
    
public:
    UPalSoundPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void BeginPlay();
    
};

