#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalInteractiveObjectActionType.h"
#include "PalMapObjectExtraFunctionComponent.h"
#include "PalMapObjectItemProductExtraFunctionComponentTeleport.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectItemProductExtraFunctionComponentTeleport : public UPalMapObjectExtraFunctionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EPalInteractiveObjectActionType ActionType;
    
    UPROPERTY(EditDefaultsOnly)
    FGuid LocationIdTeleportTo;
    
public:
    UPalMapObjectItemProductExtraFunctionComponentTeleport(const FObjectInitializer& ObjectInitializer);

};

