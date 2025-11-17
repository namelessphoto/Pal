#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonUserWidget -FallbackName=CommonUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "PrimaryGameLayout.generated.h"

class UCommonActivatableWidgetContainerBase;

UCLASS(Abstract, EditInlineNew)
class COMMONGAME_API UPrimaryGameLayout : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    TMap<FGameplayTag, UCommonActivatableWidgetContainerBase*> Layers;
    
public:
    UPrimaryGameLayout();

protected:
    UFUNCTION(BlueprintCallable)
    void RegisterLayer(FGameplayTag LayerTag, UCommonActivatableWidgetContainerBase* LayerWidget);
    
};

