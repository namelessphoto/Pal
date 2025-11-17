#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "PalResidentSkillNotifyParameter.h"
#include "PalResidentSkillModuleBase.generated.h"

class APalCharacter;
class UPalPartnerSkillParameterComponent;

UCLASS(Blueprintable)
class PAL_API UPalResidentSkillModuleBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FRandomStream RandomStream;
    
private:
    UPROPERTY()
    TWeakObjectPtr<APalCharacter> OwnerCharacter;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UPalPartnerSkillParameterComponent> PartnerSkillParameterComponent;
    
public:
    UPalResidentSkillModuleBase();

private:
    UFUNCTION()
    void Tick(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendNotify_InServer(FName NotifyName, FPalResidentSkillNotifyParameter NotifyParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotify(const FName& NotifyName, const FPalResidentSkillNotifyParameter& NotifyParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInactivatedAsOtomo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivatedAsOtomo();
    
    UFUNCTION(BlueprintPure)
    bool IsDisabled() const;
    
private:
    UFUNCTION()
    void Initialize(UPalPartnerSkillParameterComponent* PartnerSkillComponent);
    
public:
    UFUNCTION(BlueprintPure)
    UPalPartnerSkillParameterComponent* GetPartnerSkillParameterComponent() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetOwner() const;
    
};

