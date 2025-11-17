#ifndef UE4SS_SDK_SpreadSheetToCsv_HPP
#define UE4SS_SDK_SpreadSheetToCsv_HPP

#include "SpreadSheetToCsv_enums.hpp"

class USpreadSheetImpoter : public UObject
{
    FSpreadSheetImpoterOnGetResult OnGetResult;
    void OnGetResult(const bool bSuccess, class USpreadSheetImpoter* Importer, const EFetchResult Status);
    FSpreadSheetImpoterErrorLogger ErrorLogger;
    void OutputErrorDelegate(FString ErrorMsg);
    class UDataTable* TargetDataTable;
    TArray<int32> IgnoreRowIndexes;
    FName AutoUniqueIdColumnName;
    FName RowNameHashColumnName;
    TArray<FName> MetaTagText_IgnoreRow;
    TMap<class FName, class FName> BlueprintName2ObjectPathColumnNameMap;
    FName BlueprintNamePrefix;
    bool bNoticeMessageAtNewRecordImported;

    FString ToCsvStringForLocalizedText(FString pickCultureName);
    FString ToCsvString();
    void PostProcessImport(bool& bAppliedPostProcess);
    bool IsExistNewRecord();
    class USpreadSheetImpoter* GetRequest(const FName sheetId, const FName sheetName, const FName Key);
    bool FromString(FString Data);
    FString CreateSheetUrlString(const FName sheetId, const FName sheetNameId);
    class USpreadSheetImpoter* Create();
};

class USpreadSheetUtility : public UObject
{
};

#endif
