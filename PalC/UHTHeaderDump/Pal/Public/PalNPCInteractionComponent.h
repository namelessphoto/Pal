#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalNPCInteractionComponent.generated.h"

class AActor;
class APalPlayerCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNPCInteractionComponent : public UActorComponent, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_DisableTalk)
    bool bDisableTalk;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDisableTalkWhenCaptured;
    
public:
    UPalNPCInteractionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
private:
    UFUNCTION()
    void OnRep_DisableTalk();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void EndTalk(APalPlayerCharacter* TalkPlayer);
    
    UFUNCTION()
    void BeginPlay();
    

    // Fix for true pure virtual functions not being implemented
};

