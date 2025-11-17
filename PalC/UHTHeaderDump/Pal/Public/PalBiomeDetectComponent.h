#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalBiomeDetectComponent.generated.h"

class AActor;
class APalBiomeAreaTriggerBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalBiomeDetectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangedBiomeDelegate, AActor*, OverlapActor, APalBiomeAreaTriggerBase*, BiomeTriggerActor);
    
    UPROPERTY(BlueprintAssignable)
    FOnChangedBiomeDelegate OnChangedBiome;
    
    UPalBiomeDetectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void ChangeBiome(APalBiomeAreaTriggerBase* BiomeTriggerActor);
    
};

