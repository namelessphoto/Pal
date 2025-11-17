#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnGetResultDelegate.h"
#include "OutputErrorDelegateDelegate.h"
#include "SpreadSheetImpoter.generated.h"

class UDataTable;
class USpreadSheetImpoter;

UCLASS(BlueprintType)
class SPREADSHEETTOCSV_API USpreadSheetImpoter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnGetResult OnGetResult;
    
    UPROPERTY(BlueprintAssignable)
    FOutputErrorDelegate ErrorLogger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TargetDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> IgnoreRowIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AutoUniqueIdColumnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RowNameHashColumnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> MetaTagText_IgnoreRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FName> BlueprintName2ObjectPathColumnNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BlueprintNamePrefix;
    
    UPROPERTY(BlueprintReadWrite)
    bool bNoticeMessageAtNewRecordImported;
    
    USpreadSheetImpoter();

    UFUNCTION(BlueprintPure)
    FString ToCsvStringForLocalizedText(const FString& pickCultureName);
    
    UFUNCTION(BlueprintPure)
    FString ToCsvString();
    
    UFUNCTION(BlueprintCallable)
    void PostProcessImport(bool& bAppliedPostProcess);
    
    UFUNCTION(BlueprintPure)
    bool IsExistNewRecord() const;
    
    UFUNCTION(BlueprintCallable)
    static USpreadSheetImpoter* GetRequest(const FName sheetId, const FName sheetName, const FName Key);
    
    UFUNCTION(BlueprintCallable)
    bool FromString(const FString& Data);
    
    UFUNCTION(BlueprintPure)
    static FString CreateSheetUrlString(const FName sheetId, const FName sheetNameId);
    
    UFUNCTION(BlueprintPure)
    static USpreadSheetImpoter* Create();
    
};

