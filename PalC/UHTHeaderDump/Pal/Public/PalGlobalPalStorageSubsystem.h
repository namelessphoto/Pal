#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EPalGlobalStorageImportResult.h"
#include "PalGlobalPalStorageImportResultAdditionalData.h"
#include "PalGlobalPalStorageSaveParameter.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalGlobalPalStorageSubsystem.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalGlobalPalStorageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveStorageDataDelegate, bool, bIsSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoadStorageDataDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FImportSaveParameterDelegate, EPalGlobalStorageImportResult, Result, const FPalGlobalPalStorageImportResultAdditionalData&, AdditionalData);
    
    UPROPERTY(BlueprintAssignable)
    FLoadStorageDataDelegate OnLoadStorageDataDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSaveStorageDataDelegate OnSaveStorageDataDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FImportSaveParameterDelegate OnImportSaveParameterDelegate;
    
private:
    UPROPERTY(Transient)
    TArray<FPalGlobalPalStorageSaveParameter> SaveParameterArray;
    
    UPROPERTY(Transient)
    bool IsLoadedData;
    
public:
    UPalGlobalPalStorageSubsystem();

    UFUNCTION(BlueprintPure)
    int32 GetFirstEmptySlotIndex(int32 RootSearchIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDataIndex(const FPalInstanceID& SearchInstanceID) const;
    
    UFUNCTION(BlueprintPure)
    bool GetData(const int32 DataIndex, FPalGlobalPalStorageSaveParameter& OutData) const;
    
    UFUNCTION(BlueprintPure)
    bool GetAllData(TArray<FPalGlobalPalStorageSaveParameter>& OutArray) const;
    
    UFUNCTION(BlueprintPure)
    bool FindData(const FPalInstanceID& SearchInstanceID, FPalGlobalPalStorageSaveParameter& OutData) const;
    
    UFUNCTION(BlueprintPure)
    bool ExistData(const FPalInstanceID& SearchInstanceID) const;
    
    UFUNCTION(BlueprintPure)
    bool CanDuplication(const FPalIndividualCharacterSaveParameter& CheckParameter) const;
    
};

