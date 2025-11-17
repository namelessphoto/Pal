#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Flow -ObjectName=FlowComponent -FallbackName=FlowComponent
#include "PalNPCTalkFlowComponent.generated.h"

class APalCharacter;
class UPalNPCTalkFlowComponent;
class UPalNPCTalkSystem;
class UPalTalkWindowWidgetBase;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNPCTalkFlowComponent : public UFlowComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreStartFlowDelegate, UPalNPCTalkFlowComponent*, SelfComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndTalkFlowDelegate, UPalNPCTalkFlowComponent*, SelfComponent);
    
    UPROPERTY(BlueprintAssignable)
    FOnPreStartFlowDelegate OnPreStartFlowDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndTalkFlowDelegate OnEndTalkFlowDelegate;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UPalTalkWindowWidgetBase> LaunchTalkWidgetClass;
    
private:
    UPROPERTY(Transient)
    TMap<FGuid, FGuid> TokenMap_ForServer;
    
    UPROPERTY(Transient)
    FGuid Token;
    
    UPROPERTY(Transient)
    UPalNPCTalkSystem* TalkSystem;
    
public:
    UPalNPCTalkFlowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestStartTalkFlow();
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestEndTalkFlow(bool bIsCancel);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreStartTalk_BP();
    
protected:
    UFUNCTION()
    void OnFinishTalkFlow();
    
public:
    UFUNCTION(BlueprintPure)
    FGuid GetToken() const;
    
    UFUNCTION(BlueprintPure)
    UPalNPCTalkSystem* GetTalkSystem() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetTalker() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelTalkFlow();
    
};

