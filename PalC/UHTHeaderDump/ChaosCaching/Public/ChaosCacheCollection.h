#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ChaosCacheCollection.generated.h"

class UChaosCache;

UCLASS()
class CHAOSCACHING_API UChaosCacheCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UChaosCache*> Caches;
    
    UChaosCacheCollection();

};

