#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "EPalUIServerListFilterType.h"
#include "EPalUIServerListSortType.h"
#include "PalUIServerDataCollectInfo.h"
#include "PalUIServerDisplayData.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIJoinGameBase.generated.h"

UCLASS(EditInlineNew, Config=GameUserSettings)
class PAL_API UPalUIJoinGameBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bIsShowIgnoreVersionServer;
    
    UPROPERTY(BlueprintReadWrite)
    EPalUIServerListFilterType ServerFilterType;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> OfficialServerIPRangeList;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentPage;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PageSize;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsNextPage;
    
private:
    UPROPERTY()
    TArray<FPalUIServerDisplayData> CachedServerDisplayInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    FString InputIPAddress;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsCheckedInputPassword;
    
    UPROPERTY(BlueprintReadWrite)
    FString LastSelectedRegionName;
    
private:
    UPROPERTY()
    FString SaveConfigCategoryName;
    
public:
    UPalUIJoinGameBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SaveConfigValue();
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestOfficialServerIPRange();
    
    UFUNCTION(BlueprintCallable)
    void RequestGetServerList(EPalUIServerListFilterType Type, EPalUIServerListSortType SortType, const FString& Region, int32 PageOffset, const FString& SearchWord, bool IsStrictVersion);
    
private:
    UFUNCTION()
    void OnCompleteOfficialServerIPRange(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCompleteGetServerListEvent();
    
private:
    UFUNCTION()
    void OnCompleteFindSessions(bool IsSuccess, const TArray<FBlueprintSessionResult>& Results, const FString& ErrorStr);
    
public:
    UFUNCTION()
    void OnCompleteFindSessionResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION(BlueprintCallable)
    void ConnectServerByAddress(const FString& Address, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    void ConnectServer(const FPalUIServerDisplayData& ServerDisplayData);
    
protected:
    UFUNCTION(BlueprintPure)
    void CollectServerDisplayInfo(const FPalUIServerDataCollectInfo& CollectInfo, TArray<FPalUIServerDisplayData>& OutServerInfo);
    
};

