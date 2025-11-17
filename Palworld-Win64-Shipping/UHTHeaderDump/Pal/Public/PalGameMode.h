#pragma once
#include "CoreMinimal.h"
#include "PalGameModeBase.h"
#include "PalGameMode.generated.h"

class APlayerStart;
class UPocketpairUserInfo;

UCLASS(NonTransient)
class PAL_API APalGameMode : public APalGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    APlayerStart* CachePlayerStart;
    
public:
    APalGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintCallable)
    void RespawnPlayer(int32 PlayerIndex);
    
private:
    UFUNCTION()
    void OnUpdateSession(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION()
    void OnServerLobbyUpdate() const;
    
public:
    UFUNCTION()
    void OnEOSLoginDedicatedServerComplete(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr);
    
private:
    UFUNCTION()
    void OnCompleteCreateSession(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
public:
    UFUNCTION()
    void OnCompleteAuth(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION()
    void InitDedicatedServer();
    
protected:
    UFUNCTION(BlueprintCallable)
    APlayerStart* FindPlayerStartWithTag(const FName& Tag);
    
private:
    UFUNCTION()
    void CreateSession(const FString& Address);
    
};

