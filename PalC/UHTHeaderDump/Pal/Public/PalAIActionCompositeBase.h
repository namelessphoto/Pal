#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalAIActionCompositeBase.generated.h"

class AController;
class APawn;
class UPalAIActionBase;
class UPalAIActionComponent;
class UPalAIActionCompositeBase;
class UPalActionComponent;
class UPalCharacterParameterComponent;

UCLASS(BlueprintType)
class UPalAIActionCompositeBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UPalAIActionCompositeBase* Child;
    
    UPROPERTY(Instanced)
    UPalAIActionComponent* OwnerComponent;
    
public:
    UPalAIActionCompositeBase();

    UFUNCTION(BlueprintCallable)
    void SetChildActionComposite(UPalAIActionCompositeBase* Composite);
    
    UFUNCTION(BlueprintCallable)
    void SetChildAction(UPalAIActionBase* action, UObject* Instigator);
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintPure)
    UPalAIActionComponent* GetOwnerComponent() const;
    
    UFUNCTION(BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintPure)
    UPalAIActionCompositeBase* GetChild() const;
    
    UFUNCTION(BlueprintPure)
    UPalCharacterParameterComponent* GetCharacterParameter() const;
    
    UFUNCTION(BlueprintPure)
    UPalActionComponent* GetActionComponent() const;
    
};

