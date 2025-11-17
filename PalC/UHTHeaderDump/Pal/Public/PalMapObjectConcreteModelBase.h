#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalInteractiveObjectIndicatorType.h"
#include "EPalMapObjectConcreteModelModuleType.h"
#include "PalFastMapObjectModuleRepInfoArray.h"
#include "PalMapObjectModuleDelegateDelegate.h"
#include "PalMapObjectModuleMulticastDelegateDelegate.h"
#include "PalMapObjectConcreteModelBase.generated.h"

class AActor;
class APalMapObject;
class IPalMapObjectItemContainerAccessInterface;
class UPalMapObjectItemContainerAccessInterface;
class UPalBaseCampModel;
class UPalMapObjectCharacterContainerModule;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectEnergyModule;
class UPalMapObjectItemContainerModule;
class UPalMapObjectPasswordLockModule;
class UPalMapObjectSwitchModule;
class UPalMapObjectWorkeeModule;

UCLASS(Abstract, BlueprintType)
class PAL_API UPalMapObjectConcreteModelBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDelegate, UPalMapObjectConcreteModelBase*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnAvailableDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnNotAvailableDelegate;
    
private:
    UPROPERTY()
    TMap<UClass*, FPalMapObjectModuleMulticastDelegate> OnSpawnedReadyModuleDelegateMap;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid InstanceId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid ModelInstanceId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bDisposed;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalFastMapObjectModuleRepInfoArray ModuleRepInfoArray;
    
    UPROPERTY(Transient)
    UPalMapObjectWorkeeModule* WorkeeModuleCache;
    
public:
    UPalMapObjectConcreteModelBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    FName TryGetMapObjectId() const;
    
    UFUNCTION(BlueprintPure)
    FText TryGetItemContainerOverrideName() const;
    
protected:
    UFUNCTION()
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnTriggeringInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType, const float DeltaTime);
    
    UFUNCTION()
    void OnStartTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnRep_ModuleArray();
    
    UFUNCTION()
    void OnEndTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
public:
    UFUNCTION(BlueprintPure)
    UPalMapObjectWorkeeModule* GetWorkeeModule() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetTransform() const;
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectSwitchModule* GetSwitchModule() const;
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectPasswordLockModule* GetPasswordLockModule() const;
    
    UFUNCTION(BlueprintPure)
    void GetMapObjectLocation(FVector& outVector);
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectItemContainerModule* GetItemContainerModule() const;
    
    UFUNCTION(BlueprintPure)
    TScriptInterface<IPalMapObjectItemContainerAccessInterface> GetItemContainerAccess();
    
    UFUNCTION(BlueprintPure)
    FGuid GetInstanceId() const;
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectEnergyModule* GetEnergyModule() const;
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectCharacterContainerModule* GetCharacterContainerModule() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetBaseCampModelBelongTo() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetBaseCampIdBelongTo() const;
    
    UFUNCTION(BlueprintPure)
    APalMapObject* GetActor() const;
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnReadyModule(const EPalMapObjectConcreteModelModuleType ModuleType, FPalMapObjectModuleDelegate Delegate);
    
};

