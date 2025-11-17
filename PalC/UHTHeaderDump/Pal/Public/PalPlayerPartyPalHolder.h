#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "PalPlayerPartyPalHolder.generated.h"

class APalCharacter;
class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class PAL_API UPalPlayerPartyPalHolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UPalIndividualCharacterHandle* FirstOtomoPal;
    
    UPROPERTY(Transient)
    UPalIndividualCharacterHandle* SecondOtomoPal;
    
    UPROPERTY(Transient)
    TArray<UPalIndividualCharacterHandle*> BenchMember;
    
    UPROPERTY(Transient)
    float FirstCoolTimer;
    
    UPROPERTY(Transient)
    float SecondCoolTimer;
    
    UPROPERTY(Transient)
    float CoolDownTime;
    
public:
    UPalPlayerPartyPalHolder();

    UFUNCTION(BlueprintCallable)
    void UpdateCoolTimer(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Test_SetClassArray(TArray<TSubclassOf<APalCharacter>> MonsterClassArray);
    
    UFUNCTION(BlueprintCallable)
    void SetUpPartyHolder(float CoolDownTime_Second);
    
    UFUNCTION(BlueprintCallable)
    void RestartCoolTime(bool SecondPal);
    
    UFUNCTION(BlueprintPure)
    bool PawnOtmoIsPartyOtomo(bool SecondPal, UPalIndividualCharacterHandle* IDHandle);
    
    UFUNCTION(BlueprintPure)
    bool IsUsableCommandSkill(bool SecondPal);
    
    UFUNCTION(BlueprintPure)
    void GetPartyMember(TArray<UPalIndividualCharacterHandle*>& OutPartyMember);
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* GetOtomoPal(bool SecondPal);
    
    UFUNCTION(BlueprintPure)
    float GetCoolTimeRate(bool SecondPal);
    
    UFUNCTION(BlueprintCallable)
    void ChangePalSlot(bool SecondPal);
    
};

