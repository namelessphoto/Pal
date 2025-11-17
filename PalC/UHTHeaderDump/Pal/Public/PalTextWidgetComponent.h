#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "PalTextWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalTextWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FText DefaultText;
    
public:
    UPalTextWidgetComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReflectTextToWidget(const FText& Text);
    
public:
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    FText GetCurrentText() const;
    
};

