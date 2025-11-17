#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnlineHotfixManager.generated.h"

UCLASS(BlueprintType)
class HOTFIX_API UOnlineHotfixManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FString OSSName;
    
    UPROPERTY(Config)
    FString HotfixManagerClassName;
    
    UPROPERTY(Config)
    FString DebugPrefix;
    
    UPROPERTY(Transient)
    TArray<UObject*> AssetsHotfixedFromIniFiles;
    
    UOnlineHotfixManager();

    UFUNCTION(BlueprintCallable)
    void StartHotfixProcess();
    
};

