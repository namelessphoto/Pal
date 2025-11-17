#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalQuestTrackingLocationSettingData.h"
#include "PalQuestBlock.generated.h"

class UPalQuestBlock;

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedBlockDelegate, UPalQuestBlock*, UpdatedQuestBlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestReturnBlock, UPalQuestBlock*, CompletedQuestBlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedBlockDelegate, UPalQuestBlock*, CompletedQuestBlock);
    
    UPROPERTY(BlueprintAssignable)
    FUpdatedBlockDelegate OnUpdatedBlockInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCompletedBlockDelegate OnCompletedBlockInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRequestReturnBlock OnRequestReturnBlock;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool IsAutoComplete;
    
    UPROPERTY(ReplicatedUsing=OnRep_CanCompleteFlag)
    bool CanCompleteFlag;
    
    UPROPERTY(EditDefaultsOnly)
    FPalQuestTrackingLocationSettingData LocationSettingData;
    
public:
    UPalQuestBlock();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetCanComplete(bool flag);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReturnBlock_ServerInternal();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetup_ServerInternal_ForBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetup_Client_ForBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReturn_ServerInternal_ForBP();
    
    UFUNCTION()
    void OnRep_CanCompleteFlag();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComplete_ServerInternal_ForBP();
    
    UFUNCTION(BlueprintCallable)
    void NotifyUpdateQuest_Client();
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void GetProgressText(FText& OutText);
    
protected:
    UFUNCTION(BlueprintPure)
    FGuid GetOwnerPlayerUId() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void GetDescriptionText(FText& OutText);
    
    UFUNCTION(BlueprintPure)
    bool CanComplete() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallUpdateBlockDelegate_ForBP();
    
};

