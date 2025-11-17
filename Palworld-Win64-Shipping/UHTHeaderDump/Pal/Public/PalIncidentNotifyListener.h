#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalIncidentState.h"
#include "PalIncidentNotifyParameter.h"
#include "PalIncidentNotifyListener.generated.h"

class UPalIncidentNotifyListener;

UCLASS(Blueprintable)
class UPalIncidentNotifyListener : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIncidentStateNotifyDelegate, UPalIncidentNotifyListener*, Listener, EPalIncidentState, IncidentState, const FPalIncidentNotifyParameter&, Parameter);
    
    UPROPERTY(BlueprintAssignable)
    FIncidentStateNotifyDelegate OnIncidentStateNotifyDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* FilterOccuredObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* FilterOwnerObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> FilterIncidentIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> FilterIncidentTypes;
    
    UPalIncidentNotifyListener();

    UFUNCTION(BlueprintCallable)
    void UnregisterFromIncidentSystem();
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystemWithFilterOwner(UObject* FilterOwner);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystemWithFilterOccuredOwner(UObject* FilterOccured, UObject* FilterOwner);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystemWithFilterOccured(UObject* FilterOccured);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystemWithFilterIdsOwner(const TArray<FName>& FilterIds, UObject* FilterOwner);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystemWithFilterIdsOccuredOwner(const TArray<FName>& FilterIds, UObject* FilterOccured, UObject* FilterOwner);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystemWithFilterIdsOccured(const TArray<FName>& FilterIds, UObject* FilterOccured);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystemWithFilterIds(const TArray<FName>& FilterIds);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystemWithFilterIdOwner(FName FilterId, UObject* FilterOwner);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystemWithFilterIdOccuredOwner(FName FilterId, UObject* FilterOccured, UObject* FilterOwner);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystemWithFilterIdOccured(FName FilterId, UObject* FilterOccured);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystemWithFilterId(FName FilterId);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToIncidentSystem();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnIncidentStateNotify(UPalIncidentNotifyListener* Listener, EPalIncidentState IncidentState, const FPalIncidentNotifyParameter& Parameter);
    
};

