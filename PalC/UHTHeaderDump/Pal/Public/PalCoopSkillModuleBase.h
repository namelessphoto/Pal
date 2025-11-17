#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalLogType.h"
#include "PalCoopSkillModuleBase.generated.h"

class APalCharacter;
class UPalPartnerSkillParameterComponent;

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillModuleBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EPalLogType ExecuteLog;
    
private:
    UPROPERTY()
    APalCharacter* OwnerCharacter;
    
public:
    UPalCoopSkillModuleBase();

protected:
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION()
    void SetTrainerCoopFlag(bool IsCoop);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSkillOverheat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialized();
    
    UFUNCTION()
    void Initialize(UPalPartnerSkillParameterComponent* PartnerSkillComponent);
    
    UFUNCTION(BlueprintPure)
    int32 GetOwnerRank() const;
    
public:
    UFUNCTION(BlueprintPure)
    APalCharacter* GetOwner() const;
    
private:
    UFUNCTION()
    void AddSkillLog();
    
protected:
    UFUNCTION()
    void Abort();
    
};

