#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "EPalVisualEffectID.h"
#include "PalVisualEffectDynamicParameter.h"
#include "PalVisualEffectComponent.generated.h"

class AActor;
class UPalVisualEffectBase;
class UPalVisualEffectComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalVisualEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemoveVisualEffect, const UPalVisualEffectComponent*, VisualEffectComponent, EPalVisualEffectID, VisualEffectID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCompleteVisualEffect, const UPalVisualEffectComponent*, VisualEffectComponent, EPalVisualEffectID, VisualEffectID, UPalVisualEffectBase*, VisualEffect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAddVisualEffect, const UPalVisualEffectComponent*, VisualEffectComponent, EPalVisualEffectID, VisualEffectID, UPalVisualEffectBase*, VisualEffect);
    
private:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalVisualEffectID, TSoftClassPtr<UPalVisualEffectBase>> VisualEffectClass_OverrideMap;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnAddVisualEffect OnAddVisualEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRemoveVisualEffect OnRemoveVisualEffectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCompleteVisualEffect OnCompleteVisualEffectDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalVisualEffectBase*> ExecutionVisualEffects;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalVisualEffectBase*> TerminatingVisualEffects;
    
public:
    UPalVisualEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void RemoveVisualEffectForActor_Local(AActor* Actor, EPalVisualEffectID VisualEffectID);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveVisualEffectForActor(AActor* Actor, EPalVisualEffectID VisualEffectID);
    
private:
    UFUNCTION(Reliable, Server)
    void RemoveVisualEffectByConflict_ToServer(EPalVisualEffectID VisualEffectID, int32 issuerID);
    
    UFUNCTION(NetMulticast, Reliable)
    void RemoveVisualEffectByConflict_ToALL(EPalVisualEffectID VisualEffectID, int32 issuerID);
    
    UFUNCTION(Reliable, Server)
    void RemoveVisualEffect_ToServer(EPalVisualEffectID VisualEffectID, int32 issuerID);
    
    UFUNCTION(NetMulticast, Reliable)
    void RemoveVisualEffect_ToALL(EPalVisualEffectID VisualEffectID, int32 issuerID);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveVisualEffect_Local(EPalVisualEffectID VisualEffectID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVisualEffect(EPalVisualEffectID VisualEffectID);
    
private:
    UFUNCTION()
    void RemoveConflictVisualEffect(EPalVisualEffectID VisualEffectID);
    
public:
    UFUNCTION()
    void EndPlay(const TEnumAsByte<EEndPlayReason> EndPlayReason);
    
    UFUNCTION()
    void BeginPlay();
    
    UFUNCTION(BlueprintCallable)
    static UPalVisualEffectBase* AddVisualEffectForActor_Local(AActor* Actor, EPalVisualEffectID VisualEffectID, FPalVisualEffectDynamicParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    static UPalVisualEffectBase* AddVisualEffectForActor(AActor* Actor, EPalVisualEffectID VisualEffectID, FPalVisualEffectDynamicParameter Parameter);
    
private:
    UFUNCTION(Reliable, Server)
    void AddVisualEffect_ToServer(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter, int32 issuerID);
    
    UFUNCTION(NetMulticast, Reliable)
    void AddVisualEffect_ToALL(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter, int32 issuerID);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalVisualEffectBase* AddVisualEffect_Local(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter);
    
    UFUNCTION(BlueprintCallable)
    UPalVisualEffectBase* AddVisualEffect(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter);
    
};

