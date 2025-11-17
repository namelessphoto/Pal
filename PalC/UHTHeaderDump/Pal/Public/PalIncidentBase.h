#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalIncidentState.h"
#include "PalIncidentExecutionSettings.h"
#include "PalIncidentIdParameter.h"
#include "PalIncidentSystemFunctionAccessor.h"
#include "PalNPCTalkSystemCustomFunctionParameters.h"
#include "PalIncidentBase.generated.h"

class UPalIncidentBase;
class UPalIncidentDynamicParameter;
class UPalPlayerInventoryData;

UCLASS(Blueprintable)
class PAL_API UPalIncidentBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FPalIncidentExecutionSettings ExecSettings;
    
private:
    UPROPERTY(VisibleAnywhere)
    FPalIncidentIdParameter IdParameter;
    
    UPROPERTY(VisibleAnywhere)
    UPalIncidentBase* ParentIncident;
    
    UPROPERTY(VisibleAnywhere)
    UPalIncidentDynamicParameter* DynamicParameter;
    
    UPROPERTY(VisibleAnywhere)
    FPalIncidentSystemFunctionAccessor FunctionAccessor;
    
    UPROPERTY(VisibleAnywhere)
    bool bForceStop;
    
    UPROPERTY(VisibleAnywhere)
    UObject* OccuredObject;
    
    UPROPERTY(VisibleAnywhere)
    UObject* OwnerObject;
    
    UPROPERTY(VisibleAnywhere)
    EPalIncidentState ExecState;
    
public:
    UPalIncidentBase();

    UFUNCTION(BlueprintNativeEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicParameter(UPalIncidentDynamicParameter* Parameter);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 RequestConsumeInventoryItem(UPalPlayerInventoryData* InventoryData, FName ItemId, int32 ConsumeNum);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGenerated();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnForceStop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCustomEvent(const FName& CustomEventName, const FPalNPCTalkSystemCustomFunctionParameters& Parameter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChildInitialized(UPalIncidentBase* Child);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCanceled();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBegin();
    
    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsExistCustomEvent(const FName& CustomEventName);
    
    UFUNCTION(BlueprintPure)
    bool IsExecuting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCanceled() const;
    
    UFUNCTION(BlueprintPure)
    bool HasOption(const FName& Option) const;
    
protected:
    UFUNCTION(BlueprintPure)
    UPalIncidentBase* GetRootIncident() const;
    
    UFUNCTION(BlueprintPure)
    UPalIncidentBase* GetParentIncident() const;
    
public:
    UFUNCTION(BlueprintPure)
    UObject* GetOwner() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetOccuredObject() const;
    
    UFUNCTION(BlueprintPure)
    FName GetIncidentType() const;
    
    UFUNCTION(BlueprintPure)
    FName GetIncidentId() const;
    
    UFUNCTION(BlueprintPure)
    UPalIncidentDynamicParameter* GetDynamicParameter() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetArgs() const;
    
    UFUNCTION(BlueprintPure)
    FName GetArg(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceStop();
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DropItem(FName ItemId, int32 DropNum, FVector SpawnLocation, FVector ReleaseDirection);
    
};

