#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalElementType.h"
#include "EPalStatusPhysicalHealthType.h"
#include "FixedPoint64.h"
#include "PalUIStatusModel.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class UPalUIStatusModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangedIndex);
    
    UPROPERTY(BlueprintAssignable)
    FChangedIndex OnChangeSelectedIndexDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<UPalIndividualCharacterHandle*> palHandles;
    
public:
    UPalUIStatusModel();

    UFUNCTION(BlueprintCallable)
    void OnClickedPalIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const TArray<UPalIndividualCharacterHandle*>& Handles);
    
    UFUNCTION(BlueprintPure)
    uint8 GetNowSelectedIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplaySpeed(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplayShotAttack(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    EPalStatusPhysicalHealthType GetDisplayPhysicalHealthType(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisplayPassiveSkillList(int32 Index, TArray<FName>& OutArray) const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetDisplayPalNum() const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* GetDisplayPalHandle(uint8 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplayNowExp(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void GetDisplayNickName(int32 Index, FString& outName);
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplayNextExp(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplayMeleeAttack(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    float GetDisplayMaxHunger(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetDisplayMaxHP(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplayLevel(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    float GetDisplayHunger(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    FFixedPoint64 GetDisplayHP(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    EPalElementType GetDisplayElementType2(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    EPalElementType GetDisplayElementType1(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplayEatingHabits(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDisplayDefence(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayDefaultName(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayCoopActionName(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayActiveSkillName(int32 Index, int32 skillIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeNickname(int32 Index, const FString& NewNickName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeIndex(uint8 Index);
    
};

