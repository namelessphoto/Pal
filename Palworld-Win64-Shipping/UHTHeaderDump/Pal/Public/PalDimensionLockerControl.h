#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDimensionPalStorageSaveParameter.h"
#include "PalDimensionStorageControlData.h"
#include "PalDimensionStorageRestoreInfo.h"
#include "PalInstanceID.h"
#include "PalDimensionLockerControl.generated.h"

class UPalDimensionLockerControl;

UCLASS()
class PAL_API UPalDimensionLockerControl : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateData, const TArray<int32>&, UpdatedDataIndexArray);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateCurrentControllingPage, const FGuid&, PlayerUId, int32, NewPageNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimeoutPlayer, const FGuid&, TimeoutPlayerUId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSortedData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSavedLockerData, UPalDimensionLockerControl*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateCurrentControllingPage OnUpdateCurrentControllingPage;
    
    UPROPERTY()
    FSavedLockerData OnSavedLockerData;
    
    UPROPERTY()
    FUpdateData OnUpdateData;
    
    UPROPERTY()
    FSortedData OnSortedData;
    
    UPROPERTY()
    FTimeoutPlayer OnTimeoutPlayer;
    
private:
    UPROPERTY()
    TMap<FGuid, FPalDimensionStorageControlData> ControllingPlayerData;
    
    UPROPERTY()
    FGuid LockerOwnedPlayerUId;
    
    UPROPERTY()
    TArray<FPalDimensionPalStorageSaveParameter> LockerData;
    
    UPROPERTY()
    TMap<FPalInstanceID, FPalDimensionStorageRestoreInfo> RestoreInfoMap;
    
public:
    UPalDimensionLockerControl();

private:
    UFUNCTION()
    void OnRestorePalData(FPalInstanceID IndividualId);
    
};

