#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonSession_FindSessionsFinishedDynamicDelegate.h"
#include "ECommonSessionOnlineMode.h"
#include "CommonSession_SearchSessionRequest.generated.h"

class UCommonSession_SearchResult;

UCLASS(BlueprintType)
class COMMONUSER_API UCommonSession_SearchSessionRequest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ECommonSessionOnlineMode OnlineMode;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUseLobbies;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UCommonSession_SearchResult*> Results;
    
private:
    UPROPERTY(BlueprintAssignable)
    FCommonSession_FindSessionsFinishedDynamic K2_OnSearchFinished;
    
public:
    UCommonSession_SearchSessionRequest();

};

