#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "DataRegistryId.h"
#include "DataRegistryItemAcquiredBPCallbackDelegate.h"
#include "DataRegistryLookup.h"
#include "DataRegistryType.h"
#include "EDataRegistrySubsystemGetItemResult.h"
#include "DataRegistrySubsystem.generated.h"

UCLASS(BlueprintType)
class DATAREGISTRY_API UDataRegistrySubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UDataRegistrySubsystem();

    UFUNCTION(BlueprintPure)
    static bool NotEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidDataRegistryType(FDataRegistryType DataRegistryType);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidDataRegistryId(FDataRegistryId DataRegistryId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCachedItemFromLookupBP(FDataRegistryId ItemId, const FDataRegistryLookup& ResolvedLookup, FTableRowBase& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCachedItemBP(FDataRegistryId ItemId, UPARAM(Ref) FTableRowBase& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static void FindCachedItemBP(FDataRegistryId ItemId, EDataRegistrySubsystemGetItemResult& OutResult, FTableRowBase& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static void EvaluateDataRegistryCurve(FDataRegistryId ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult& OutResult, float& OutValue);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_DataRegistryTypeToString(FDataRegistryType DataRegistryType);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_DataRegistryIdToString(FDataRegistryId DataRegistryId);
    
    UFUNCTION(BlueprintCallable)
    static bool AcquireItemBP(FDataRegistryId ItemId, FDataRegistryItemAcquiredBPCallback AcquireCallback);
    
};

