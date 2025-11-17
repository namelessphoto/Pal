#include "DataRegistrySubsystem.h"

UDataRegistrySubsystem::UDataRegistrySubsystem() {
}

bool UDataRegistrySubsystem::NotEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B) {
    return false;
}

bool UDataRegistrySubsystem::NotEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B) {
    return false;
}

bool UDataRegistrySubsystem::IsValidDataRegistryType(FDataRegistryType DataRegistryType) {
    return false;
}

bool UDataRegistrySubsystem::IsValidDataRegistryId(FDataRegistryId DataRegistryId) {
    return false;
}

bool UDataRegistrySubsystem::GetCachedItemFromLookupBP(FDataRegistryId ItemId, const FDataRegistryLookup& ResolvedLookup, FTableRowBase& OutItem) {
    return false;
}

bool UDataRegistrySubsystem::GetCachedItemBP(FDataRegistryId ItemId, FTableRowBase& OutItem) {
    return false;
}

void UDataRegistrySubsystem::FindCachedItemBP(FDataRegistryId ItemId, EDataRegistrySubsystemGetItemResult& OutResult, FTableRowBase& OutItem) {
}

void UDataRegistrySubsystem::EvaluateDataRegistryCurve(FDataRegistryId ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult& OutResult, float& OutValue) {
}

bool UDataRegistrySubsystem::EqualEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B) {
    return false;
}

bool UDataRegistrySubsystem::EqualEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B) {
    return false;
}

FString UDataRegistrySubsystem::Conv_DataRegistryTypeToString(FDataRegistryType DataRegistryType) {
    return TEXT("");
}

FString UDataRegistrySubsystem::Conv_DataRegistryIdToString(FDataRegistryId DataRegistryId) {
    return TEXT("");
}

bool UDataRegistrySubsystem::AcquireItemBP(FDataRegistryId ItemId, FDataRegistryItemAcquiredBPCallback AcquireCallback) {
    return false;
}


