#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalSkinType.h"
#include "OnApplySkinDelegate.h"
#include "PalSkinInventoryInfo.h"
#include "PalPlayerSkinData.generated.h"

class UPalIndividualCharacterParameter;
class UPalSkinDataBase;

UCLASS(BlueprintType)
class PAL_API UPalPlayerSkinData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SkinInventoryInfo)
    FPalSkinInventoryInfo SkinInventoryInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PlayerUId)
    FGuid PlayerUId;
    
public:
    UPalPlayerSkinData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendNewInventoryInfo_ForClient(FGuid Guid, FPalSkinInventoryInfo NewInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendNewInventoryInfo(FGuid Guid, FPalSkinInventoryInfo NewInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRespawnPal(UPalIndividualCharacterParameter* IndividualCharacterParameter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveSkin(EPalSkinType SkinType, FName InTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemovePalSkin(UPalIndividualCharacterParameter* IndividualCharacterParameter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RefreshValidSkin(FGuid Guid);
    
protected:
    UFUNCTION()
    void OnRep_SkinInventoryInfo();
    
    UFUNCTION()
    void OnRep_PlayerUId();
    
public:
    UFUNCTION(Reliable, Server)
    void LoginComplete_Server();
    
    UFUNCTION(BlueprintPure)
    bool IsValidSkin(FName SkinName) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetHaveSkinListFromType(EPalSkinType InType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetHaveSkinList();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void FinishRefreshValidSkin(FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DeleteSkin(FName SkinName);
    
    UFUNCTION(BlueprintCallable)
    void ApplySkin(FName SkinName, FOnApplySkin InEvent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ApplyPalSkin(FName SkinName, UPalIndividualCharacterParameter* IndividualCharacterParameter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddSkin(FName SkinName);
    
};

