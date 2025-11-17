#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDynamicItemDisposeWaitNotifyInfo.h"
#include "PalDynamicItemId.h"
#include "PalDynamicItemDataManager.generated.h"

class UPalDynamicItemDataBase;

UCLASS()
class UPalDynamicItemDataManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCreateItemDelegate OnCreateItemInServerDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalDynamicItemId, UPalDynamicItemDataBase*> ItemDynamicDataMap;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    float DisposeReservedDynamicItemRemainingTime;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 DynamicItemDisposeReserveCount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalDynamicItemDisposeWaitNotifyInfo> DisposeDynamicItemIdRequestWaitInfoMap_ServerInternal;
    
public:
    UPalDynamicItemDataManager();

};

