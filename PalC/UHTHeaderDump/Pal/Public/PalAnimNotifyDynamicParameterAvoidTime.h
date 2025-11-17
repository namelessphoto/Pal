#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionResponse -FallbackName=ECollisionResponse
#include "PalAnimNotifyDynamicParameterBase.h"
#include "PalAnimNotifyDynamicParameterAvoidTime.generated.h"

class UPrimitiveComponent;

UCLASS()
class UPalAnimNotifyDynamicParameterAvoidTime : public UPalAnimNotifyDynamicParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionResponse>> AttackResponseMap;
    
    UPalAnimNotifyDynamicParameterAvoidTime();

};

