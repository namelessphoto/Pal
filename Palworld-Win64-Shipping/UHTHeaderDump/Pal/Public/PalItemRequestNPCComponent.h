#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalItemRequireCategory.h"
#include "PalItemRequestNPCComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalItemRequestNPCComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalItemRequireCategory RequestCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool EnableCircum;
    
    UPalItemRequestNPCComponent(const FObjectInitializer& ObjectInitializer);

};

