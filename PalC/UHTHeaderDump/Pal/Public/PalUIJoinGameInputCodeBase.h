#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
//CROSS-MODULE INCLUDE V2: -ModuleName=PocketpairUser -ObjectName=JoinSessionResultType -FallbackName=JoinSessionResultType
#include "PalUserWidgetOverlayUI.h"
#include "PalUIJoinGameInputCodeBase.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalUIJoinGameInputCodeBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString CahcedInputInviteCode;
    
    UPROPERTY()
    FName EnableUIInputFlagName;
    
public:
    UPalUIJoinGameInputCodeBase();

protected:
    UFUNCTION(BlueprintCallable)
    void VerifyPassword(const FString& InputPassword);
    
    UFUNCTION(BlueprintCallable)
    void VerifyInviteCode(const FString& InputCode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNotifyVerifyPassword(bool IsMatchPassword);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNotifyVerifyInviteCode(bool IsValidCode, bool IsRequirePassword);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompletedJoinSession(bool IsSuccess, JoinSessionResultType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedFindSessions(bool IsSuccess, const TArray<FBlueprintSessionResult>& Results, const FString& ErrorStr);
    
};

