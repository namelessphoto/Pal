#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalBiomeType.h"
#include "PalBiomeAreaTriggerBase.generated.h"

UCLASS()
class PAL_API APalBiomeAreaTriggerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPalBiomeType BindBiomeType;
    
    APalBiomeAreaTriggerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlap(AActor* OtherActor, EPalBiomeType BiomeType);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OtherActor, EPalBiomeType BiomeType);
    
public:
    UFUNCTION(BlueprintPure)
    EPalBiomeType GetBiomeType() const;
    
};

