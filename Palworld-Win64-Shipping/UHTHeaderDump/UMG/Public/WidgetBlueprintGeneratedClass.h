#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintGeneratedClass -FallbackName=BlueprintGeneratedClass
#include "DelegateRuntimeBinding.h"
#include "FieldNotificationId.h"
#include "WidgetBlueprintGeneratedClass.generated.h"

class UWidgetAnimation;
class UWidgetBlueprintGeneratedClassExtension;
class UWidgetTree;

UCLASS()
class UMG_API UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UWidgetTree* WidgetTree;
    
    UPROPERTY(Instanced)
    TArray<UWidgetBlueprintGeneratedClassExtension*> Extensions;
    
    UPROPERTY()
    TArray<FFieldNotificationId> FieldNotifyNames;
    
    UPROPERTY()
    uint8 bClassRequiresNativeTick: 1;
    
public:
    UPROPERTY()
    TArray<FDelegateRuntimeBinding> Bindings;
    
    UPROPERTY()
    TArray<UWidgetAnimation*> Animations;
    
    UPROPERTY()
    TArray<FName> NamedSlots;
    
    UPROPERTY()
    TArray<FName> AvailableNamedSlots;
    
    UPROPERTY()
    TArray<FName> InstanceNamedSlots;
    
    UWidgetBlueprintGeneratedClass();

};

