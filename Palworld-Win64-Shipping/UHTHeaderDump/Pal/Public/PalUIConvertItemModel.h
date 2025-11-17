#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalUIConvertItemRequestStartResponse.h"
#include "PalUIConvertItemModel.generated.h"

class UPalMapObjectConvertItemModel;
class UPalUIProductSettingModel;

UCLASS(BlueprintType)
class UPalUIConvertItemModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnBoolDelegate, bool, bOn);
    
    UPROPERTY(BlueprintAssignable)
    FReturnBoolDelegate OnUpdateCanTransportOut;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalUIProductSettingModel* ProductSettingModel;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TWeakObjectPtr<UPalMapObjectConvertItemModel> WeakConvertItemModel;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    bool bCanTransportOut;
    
public:
    UPalUIConvertItemModel();

    UFUNCTION(BlueprintCallable)
    void UpdateProductSetting_TransportToStorage(const bool bOn);
    
    UFUNCTION(BlueprintCallable)
    bool TryGetConcreteModel(UPalMapObjectConvertItemModel*& Model);
    
    UFUNCTION(BlueprintCallable)
    void StartProduction();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UPalMapObjectConvertItemModel* InModel);
    
    UFUNCTION(BlueprintPure)
    FText GetBuildObjectName() const;
    
    UFUNCTION(BlueprintPure)
    EPalUIConvertItemRequestStartResponse CanStartProduction() const;
    
};

