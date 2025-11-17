#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Templates/SubclassOf.h"
#include "PalMapObjectDisplayCharacterParameterComponent.generated.h"

class AController;
class UPalUserWidgetOverlayUI;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectDisplayCharacterParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RecoverAmountBySec;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform CharacterSpawnLocalTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AController> ControllerClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
    UPalMapObjectDisplayCharacterParameterComponent(const FObjectInitializer& ObjectInitializer);

};

