#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "SocialId.h"
#include "PocketpairUserSubsystem.generated.h"

class APlayerController;
class UPocketpairUserInfo;

UCLASS(BlueprintType, Config=Game)
class POCKETPAIRUSER_API UPocketpairUserSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPocketpairUserInfo* LocalUserInfo;
    
public:
    UPocketpairUserSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockAchievement(const FString& ID, float Percent);
    
    UFUNCTION()
    void OnSessionInviteReceived(const FString& InviteCode);
    
    UFUNCTION(BlueprintPure)
    FString GetTelemetryUserId() const;
    
    UFUNCTION(BlueprintPure)
    FString GetTelemetrySessionId() const;
    
    UFUNCTION(BlueprintCallable)
    FSocialId GetSocialId(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure)
    FString GetSaveDataUserId() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerNo(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPingResultCache(const FString& Address);
    
    UFUNCTION(BlueprintPure)
    UPocketpairUserInfo* GetLocalUserInfo() const;
    
    UFUNCTION(BlueprintPure)
    FString GetInviteCode() const;
    
    UFUNCTION(BlueprintPure)
    FName GetDefaultOnlineSubsystemName() const;
    
    UFUNCTION(BlueprintCallable)
    void AddPingResultCache(const FString& Address, int32 Ping);
    
};

