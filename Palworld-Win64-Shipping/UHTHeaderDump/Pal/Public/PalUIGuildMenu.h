#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalGuildPlayerInfo.h"
#include "PalUIGuildMemberDisplayInfo.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIGuildMenu.generated.h"

class UPalGroupGuildBase;

UCLASS(EditInlineNew)
class PAL_API UPalUIGuildMenu : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIGuildMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestExitGuild();
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeGuildName(const FString& NewGuildName);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeAdmin(const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable)
    void RequestBanPlayer(const FGuid& TargetPlayerUId);
    
    UFUNCTION()
    void OnUpdatedMemberInfo_Binded(const UPalGroupGuildBase* Guild, const FGuid& PlayerUId, const FPalGuildPlayerInfo& PlayerInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdatedMemberInfo(const FGuid& PlayerUId, const FPalUIGuildMemberDisplayInfo& PlayerInfo);
    
    UFUNCTION()
    void OnUpdatedGuildName_Binded(const FString& NewGuildName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdatedGuildName(const FString& NewGuildName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRemovedMemberInfo(const FGuid& PlayerUId);
    
    UFUNCTION(BlueprintPure)
    bool IsExistPlayer(const FGuid& PlayerUId);
    
    UFUNCTION(BlueprintPure)
    bool IsAdminLocalPlayer();
    
    UFUNCTION(BlueprintPure)
    UPalGroupGuildBase* GetMyGuild() const;
    
    UFUNCTION(BlueprintPure)
    void GetGuildNameModifierPlayerUId(FGuid& OutAdminPlayerUId);
    
    UFUNCTION(BlueprintPure)
    void GetGuildNameByCheckBlockedUser(FString& OutGuildName) const;
    
    UFUNCTION(BlueprintPure)
    void GetGuildName(FString& OutGuildName) const;
    
    UFUNCTION(BlueprintPure)
    void GetGuildMemberInfo(TMap<FGuid, FPalUIGuildMemberDisplayInfo>& OutDisplayInfoMap) const;
    
    UFUNCTION(BlueprintPure)
    void GetAdminPlayerUId(FGuid& OutAdminPlayerUId);
    
    UFUNCTION(BlueprintPure)
    bool CanExitGuild();
    
};

