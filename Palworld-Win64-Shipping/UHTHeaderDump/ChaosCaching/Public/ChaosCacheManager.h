#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ECacheMode.h"
#include "EStartMode.h"
#include "ObservedComponent.h"
#include "ChaosCacheManager.generated.h"

class UChaosCacheCollection;
class UPrimitiveComponent;

UCLASS()
class CHAOSCACHING_API AChaosCacheManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UChaosCacheCollection* CacheCollection;
    
    UPROPERTY(EditAnywhere)
    ECacheMode CacheMode;
    
    UPROPERTY(EditAnywhere)
    EStartMode StartMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StartTime;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<FObservedComponent> ObservedComponents;
    
public:
    AChaosCacheManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerComponentByCache(FName InCacheName);
    
    UFUNCTION(BlueprintCallable)
    void TriggerComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void TriggerAll();
    
public:
    UFUNCTION()
    void SetStartTime(float InStartTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetSingleTransform(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllComponentTransforms();
    
};

