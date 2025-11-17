#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EPalInteractiveObjectIndicatorType.h"
#include "InteractEventDelegate.h"
#include "InteractSelfEventDelegate.h"
#include "InteractingEventDelegate.h"
#include "OnCreateInteractDelegatesDelegate.h"
#include "OnCreateInteractDelegatesMultiCastDelegate.h"
#include "PalInteractiveObjectActionBy.h"
#include "PalInteractiveObjectActionInfoSet.h"
#include "PalInteractiveObjectComponentInterface.h"
#include "PalInteractiveObjectCapsuleComponent.generated.h"

class AActor;
class IPalInteractiveObjectIndicatorInterface;
class UPalInteractiveObjectIndicatorInterface;
class UDEPRECATED_PalInteractDelegates;
class UObject;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalInteractiveObjectCapsuleComponent : public UCapsuleComponent, public IPalInteractiveObjectComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsEnableTriggerInteract;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsImplementedTriggerInteract;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsEnableInteractingTick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsEnableInteractingTickInClientOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentReference IndicatorOriginRef;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsAdjustIndicatorLocationZForPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    bool bNeedTraceToPlayer;
    
private:
    UPROPERTY(Transient)
    TScriptInterface<IPalInteractiveObjectIndicatorInterface> IndicatorInterface;
    
    UPROPERTY()
    FOnCreateInteractDelegatesMultiCast OnCreateInteractDelegatesDelegate;
    
public:
    UPalInteractiveObjectCapsuleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIndicatorInterface(TScriptInterface<IPalInteractiveObjectIndicatorInterface> InIndicatorInterface);
    
private:
    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetIndicatorLocation(bool bNoShapeOffset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableTriggerInteract();
    
public:
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnCreateInteractDelegates(FOnCreateInteractDelegates Delegate);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UnbindOnInteracting(FInteractingEvent Event) override PURE_VIRTUAL(UnbindOnInteracting,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnInteractEnd(FInteractEvent Event) override PURE_VIRTUAL(UnbindOnInteractEnd,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnInteractBegin(FInteractEvent Event) override PURE_VIRTUAL(UnbindOnInteractBegin,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnEnableTriggerInteract(FInteractSelfEvent Event) override PURE_VIRTUAL(UnbindOnEnableTriggerInteract,);
    
    UFUNCTION(BlueprintCallable)
    UObject* Self() const override PURE_VIRTUAL(Self, return NULL;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    FText GetIndicatorText(const UObject* WorldContextObject, EPalInteractiveObjectIndicatorType IndicatorType) const override PURE_VIRTUAL(GetIndicatorText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    void GetIndicatorInfo(FPalInteractiveObjectActionInfoSet& ActionInfo, const FPalInteractiveObjectActionBy& SituationInfo) const override PURE_VIRTUAL(GetIndicatorInfo,);
    
    UFUNCTION(BlueprintCallable)
    UDEPRECATED_PalInteractDelegates* Delegates() const override PURE_VIRTUAL(Delegates, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    void BindOnInteracting(FInteractingEvent Event) override PURE_VIRTUAL(BindOnInteracting,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnInteractEnd(FInteractEvent Event) override PURE_VIRTUAL(BindOnInteractEnd,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnInteractBegin(FInteractEvent Event) override PURE_VIRTUAL(BindOnInteractBegin,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnEnableTriggerInteract(FInteractSelfEvent Event) override PURE_VIRTUAL(BindOnEnableTriggerInteract,);
    
};

