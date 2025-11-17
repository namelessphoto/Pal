#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalBaseCampPassiveEffectMapObjectInfo.h"
#include "PalBaseCampPassiveEffectBase.generated.h"

UCLASS(Abstract)
class UPalBaseCampPassiveEffectBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, FPalBaseCampPassiveEffectMapObjectInfo> MapObjectInfoMapByMapObjectId;
    
public:
    UPalBaseCampPassiveEffectBase();

};

