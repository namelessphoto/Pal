#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalNPCMultiTalkHandle.generated.h"

class UDataTable;
class UPalPlayerDataStorage;
class UPalPlayerRecordData;

UCLASS(Blueprintable)
class PAL_API UPalNPCMultiTalkHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName TalkId;
    
public:
    UPalNPCMultiTalkHandle();

    UFUNCTION(BlueprintCallable)
    void SetIsTransientTalkCount(bool IsTransient);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishOneTalk();
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncrementTalkCountRecord();
    
public:
    UFUNCTION(BlueprintPure)
    FName GetTalkId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDataTable* GetTalkData(const FName& inTalkID);
    
    UFUNCTION(BlueprintPure)
    UPalPlayerRecordData* GetRecordData() const;
    
    UFUNCTION(BlueprintPure)
    UPalPlayerDataStorage* GetPlayerDataStorage() const;
    
protected:
    UFUNCTION(BlueprintPure)
    int32 GetCurrentTalkCount() const;
    
};

