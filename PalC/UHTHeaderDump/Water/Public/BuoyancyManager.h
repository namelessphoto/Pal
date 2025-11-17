#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BuoyancyManager.generated.h"

class ABuoyancyManager;
class UBuoyancyComponent;
class UObject;

UCLASS()
class WATER_API ABuoyancyManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UBuoyancyComponent*> BuoyancyComponents;
    
public:
    ABuoyancyManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool GetBuoyancyComponentManager(const UObject* WorldContextObject, ABuoyancyManager*& Manager);
    
};

