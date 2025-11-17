#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalMapObjectBaseCampWorkerSpawnPointInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalMapObjectBaseCampWorkerSpawnPointInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMapObjectBaseCampWorkerSpawnPointInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void GetSpawnPointWorldTransform(FTransform& OutTransform) const;
    
};

