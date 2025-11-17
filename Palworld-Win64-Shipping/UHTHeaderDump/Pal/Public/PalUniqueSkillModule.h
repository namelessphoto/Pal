#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalUniqueSkillModule.generated.h"

class AActor;
class APalCharacter;

UCLASS(Blueprintable)
class PAL_API UPalUniqueSkillModule : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APalCharacter* ActionCharacter;
    
    UPROPERTY(Transient)
    AActor* ActionTarget;
    
public:
    UPalUniqueSkillModule();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickModule(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetActionTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetActionCharacter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndModule();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginModule();
    
    UFUNCTION(BlueprintPure)
    AActor* GetActionTarget() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetActionCharacter() const;
    
};

