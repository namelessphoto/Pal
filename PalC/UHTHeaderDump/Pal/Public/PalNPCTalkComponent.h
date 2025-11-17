#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalNPCTalkComponent.generated.h"

class AActor;
class APalCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNPCTalkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTalkStartDelegate, AActor*, SelfActor, AActor*, TargetActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTalkEndDelegate, AActor*, SelfActor, AActor*, TargetActor);
    
protected:
    UPROPERTY(BlueprintReadWrite)
    bool IsTalking;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTalkStartDelegate OnTalkStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FTalkEndDelegate OnTalkEndDelegate;
    
    UPalNPCTalkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerStartTalk(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void TriggerEndTalk(AActor* Other);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StartTalk(AActor* Other);
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool HasTalkData(APalCharacter* TalkCharacter) const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsTalking();
    
};

