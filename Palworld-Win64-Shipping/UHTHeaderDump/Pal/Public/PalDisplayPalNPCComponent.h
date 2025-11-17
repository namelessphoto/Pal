#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalPalDisplayCategory.h"
#include "PalDisplayPalNPCComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalDisplayPalNPCComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPalDisplayCategory RequestCategory;
    
    UPalDisplayPalNPCComponent(const FObjectInitializer& ObjectInitializer);

};

