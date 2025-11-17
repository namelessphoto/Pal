#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMapObjectConcreteModelModuleBase.generated.h"

UCLASS(Abstract)
class UPalMapObjectConcreteModelModuleBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bTriggeredOnSpawnedReady;
    
public:
    UPalMapObjectConcreteModelModuleBase();

};

