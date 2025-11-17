#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalIndividualCharacterSaveParameter.h"
#include "PalPsnManager.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(BlueprintType)
class PAL_API UPalPsnManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCollectedOnlineIds);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangedBlockedUsers);
    
    UPROPERTY(BlueprintAssignable)
    FCollectedOnlineIds OnCollectedOnlineIds;
    
    UPROPERTY(BlueprintAssignable)
    FChangedBlockedUsers OnChangedBlockedUsers;
    
    UPalPsnManager();

    UFUNCTION(BlueprintCallable)
    void WithOnlineIdForParameter(const UPalIndividualCharacterParameter* InParameter, const FString& InName, FString& outName);
    
    UFUNCTION(BlueprintCallable)
    void WithOnlineIdForHandle(const UPalIndividualCharacterHandle* InHandle, const FString& InName, FString& outName);
    
    UFUNCTION(BlueprintPure)
    void WithOnlineId(const FGuid& PlayerUId, const FString& InName, FString& outName) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetOnlineId(const FGuid& PlayerUId, FString& OutOnlineId) const;
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayerProfile(const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowCommunicatonRestrictionSystemDialog() const;
    
    UFUNCTION(BlueprintCallable)
    void SetCrossPlayPremiumFeature(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetCompleteSetupInGame(bool flag);
    
    UFUNCTION(BlueprintPure)
    bool IsRequiredEULA() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChatDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBlockedUser(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintCallable)
    void GetNickNameWithOnlineID(const FPalIndividualCharacterSaveParameter& SaveParam, FString& outName);
    
    UFUNCTION(BlueprintPure)
    void GetLoggedInPlayerNames(TArray<FString>& OutNames);
    
    UFUNCTION(BlueprintPure)
    void GetEULALanguageCode(FString& LanguageCode) const;
    
    UFUNCTION(BlueprintCallable)
    void AgreeEULA();
    
};

