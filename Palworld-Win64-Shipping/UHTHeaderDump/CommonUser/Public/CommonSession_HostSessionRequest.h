#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
#include "ECommonSessionOnlineMode.h"
#include "CommonSession_HostSessionRequest.generated.h"

class UWorld;

UCLASS(BlueprintType)
class COMMONUSER_API UCommonSession_HostSessionRequest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ECommonSessionOnlineMode OnlineMode;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUseLobbies;
    
    UPROPERTY(BlueprintReadWrite)
    FString ModeNameForAdvertisement;
    
    UPROPERTY(BlueprintReadWrite)
    FPrimaryAssetId MapID;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UWorld> Map;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FString, FString> ExtraArgs;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MaxPlayerCount;
    
    UCommonSession_HostSessionRequest();

};

